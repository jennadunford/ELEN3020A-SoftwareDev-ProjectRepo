const mysql = require("mysql");
const express = require("express");

const app = express();

const connection = mysql.createConnection({
  host: "remotemysql.com",
  user: "yn7m0SUz0Y",
  password: "LWRebclM6g",
  database: "yn7m0SUz0Y",
});
connection.connect(function (error) {
  if (error) throw error;
  else console.log("connected to the database succesfully");
});

app.get("/", function (req, res) {
  res.sendFile(__dirname + "/index.html");
  // res.send('Hello')
});

app.use("/static", express.static(__dirname));

app.listen(4500);
