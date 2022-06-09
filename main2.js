const mysql = require("mysql2");

const connection = mysql.createConnection({
  host: "remotemysql.com",
  user: "yn7m0SUz0Y",
  password: "LWRebclM6g",
  database: "yn7m0SUz0Y",
});

connection.query(
  "SELECT `Make`, `Model` FROM `TransportTypes`",
  function (err, results, fields) {
    console.log(err);
    console.log(results); // results contains rows returned by server
    console.log(fields); // fields contains extra meta data about results, if available
  }
);
