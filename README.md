Data Structures' Mini Project, SE-COMPS, KJSIEIT
------------------------------------------------------------------------------------------------------------------------
Summary of the problem being addressed
  Storage houses, retail stores and manufacturers face difficulties of keeping track of the stock and not necessarily only one person manages it. Sometimes a bill is generated but the stock is not correspondingly updated or the payment is made but the accounts are not updated correspondingly. Also obtaining sales analytics from a manually managed stock inventory is practically impossible, with this software analytics w.r.t each parameter can be obtained easily and and business development decisions can be made correspondingly.

Overview of the target domain
  It can be used by:
    Storage houses
    Manufacturing units
    Retail stores
    Import export agency
      irrespective of the product. (all parameters may not be required by each of the above mentioned categories)

Overview of the technical area <can_be_completed_only_after_project_is_done>
ADVANTAGES:
  It involves data structures, enhancing data organisation and efficiently accessing and modifying stored data.
  It involves file handling, sorting and searching algorithms in C.
  DISADVANTAGES:
  It is not GUI based.

Summary of the system
  The system helps to keep track of the business that happens and thus make development decisions after obtaining             analytics. 
  The system manages the stock, intelligently (see alerts for further details)
  The access to the data is restricted as per the person’s post in the company, so a salesman can only check whether a              product is in stock or not and generate the bill and others’ accessibility follows.

Flow model of the system
  This flow model is developed by keeping in mind a t-shirt manufacturer. The processes that happen here are:
  Plain t-shirts are bought from wholesalers
  Printing on the t-shirt takes place
  Printed t-shirts are packed and sold to retailers
  The process: Plain t-shirts are the raw materials and a code is generated for each of it. Each design has a pre defined code. All permutations of the (raw material code) x (design code) forms the final products. These are given new product codes are labelled, packed and sold.
  Say on a plain white t-shirt of ‘L’ size design #3 is to be printed then the code will be as follows:
  Raw material code = #25525525576 (White_L)
  Design code = #3
  So the final product code will be #255255255763 (White_L_3)

System login options:
  I.Admin login:
    Can read the stock availability.
    Can delete or overwrite entries.
    Can check and generate reports.
  II.Sales desk login:
    Can read stock availability.
    Can generate bills
  III. Branch manager login:
    Can write to stock.
    Can pay bills

Each of the operation mentioned above and other default operations are explained further below:
  I.Stock Update: When there is an in take of the stock, the repository is updated with the raw material code   (Color.Size).
  II. Stock availability check:
    Availability of the raw material can be checked.
    Availability of the finished product can be checked.
  III. Bill generation
    When there is an outflow of the stock, a tax invoice is generated and the stock repository is updated respectively.
  IV. Bill payment
    When a bill for buying the raw materials is to be paid, the transaction details are entered.
  V. Reports
    The administrator can obtain sales reports according to the following parameters:
    Color - After a specific color is selected, the report in a tabulated format will show how much sales of that color’s t-shirt are sold on which date.
    Design - After a specific design is selected, the report in a tabulated format will show how much sales of that design t-shirt are sold on which date.
    Size - After a specific size is selected, the report in a tabulated format will show how much sales of that size t-shirt are sold on which date.
    Date, week, month -wise report - After a specific date is selected, the report will show how many t-shirts of which color, which size and which design are sold.  Correspondingly for month and year.
  VI. Alerts
    If the raw material drops down below a certain specified limit by the admin at the time of set up, then an alert message is displayed every time there is a login.
    If a final product entry is made without the change in the stock of the raw material alert message is printed ‘Invalid Process’.
