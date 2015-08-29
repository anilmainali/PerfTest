Rec_WT3()
{
			lr_start_transaction("WT3_T03_URL_Landing");

	web_url("index.htm", 
		"URL=http://127.0.0.1:1080/WebTours/index.htm", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	/* Request with GET method to URL "http://127.0.0.1:1080/favicon.ico" failed during recording. Server response : 404*/

	lr_end_transaction("WT3_T03_URL_Landing",LR_AUTO);

	lr_start_transaction("WT3_T04_SignUp_Error");

	web_link("sign up now", 
		"Text=sign up now", 
		"Snapshot=t2.inf", 
		LAST);

	web_submit_form("login.pl", 
		"Snapshot=t3.inf", 
		ITEMDATA, 
		"Name=username", "Value=jojo", ENDITEM, 
		"Name=password", "Value=bean", ENDITEM, 
		"Name=passwordConfirm", "Value=bean", ENDITEM, 
		"Name=firstName", "Value=fname", ENDITEM, 
		"Name=lastName", "Value=lname", ENDITEM, 
		"Name=address1", "Value=street", ENDITEM, 
		"Name=address2", "Value=city", ENDITEM, 
		"Name=register.x", "Value=63", ENDITEM, 
		"Name=register.y", "Value=10", ENDITEM, 
		LAST);

	lr_end_transaction("WT3_T04_SignUp_Error",LR_AUTO);

	lr_start_transaction("WT3_T05_SignUp");

	web_submit_form("login.pl_2", 
		"Snapshot=t4.inf", 
		ITEMDATA, 
		"Name=username", "Value=perftest01", ENDITEM, 
		"Name=password", "Value=tester01", ENDITEM, 
		"Name=passwordConfirm", "Value=tester01", ENDITEM, 
		"Name=firstName", "Value=fname", ENDITEM, 
		"Name=lastName", "Value=lname", ENDITEM, 
		"Name=address1", "Value=street", ENDITEM, 
		"Name=address2", "Value=city", ENDITEM, 
		"Name=register.x", "Value=60", ENDITEM, 
		"Name=register.y", "Value=4", ENDITEM, 
		LAST);

	lr_end_transaction("WT3_T05_SignUp",LR_AUTO);

	lr_start_transaction("WT3_T07_SignIn_Error");

	web_submit_data("login.pl_3", 
		"Action=http://127.0.0.1:1080/cgi-bin/login.pl", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?in=home", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=userSession", "Value={userSession_capture}", ENDITEM, 
		"Name=username", "Value=unknown", ENDITEM, 
		"Name=password", "Value=nobody", ENDITEM, 
		"Name=JSFormSubmit", "Value=on", ENDITEM, 
		LAST);

	web_submit_data("login.pl_4", 
		"Action=http://127.0.0.1:1080/cgi-bin/login.pl", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?in=home", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=userSession", "Value={userSession_capture}", ENDITEM, 
		"Name=username", "Value=unknown", ENDITEM, 
		"Name=password", "Value=nobody", ENDITEM, 
		"Name=JSFormSubmit", "Value=on", ENDITEM, 
		"Name=login.x", "Value=47", ENDITEM, 
		"Name=login.y", "Value=4", ENDITEM, 
		LAST);

	lr_end_transaction("WT3_T07_SignIn_Error",LR_AUTO);

	lr_start_transaction("WT3_T08_SignIn");

	web_submit_data("login.pl_5", 
		"Action=http://127.0.0.1:1080/cgi-bin/login.pl", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?username=unknown&password=nobody", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=userSession", "Value={userSession_capture}", ENDITEM, 
		"Name=username", "Value=jojo", ENDITEM, 
		"Name=password", "Value=bean", ENDITEM, 
		"Name=JSFormSubmit", "Value=on", ENDITEM, 
		"Name=login.x", "Value=43", ENDITEM, 
		"Name=login.y", "Value=11", ENDITEM, 
		LAST);

	lr_end_transaction("WT3_T08_SignIn",LR_AUTO);

	lr_start_transaction("WT3_T21_Travel_Home");

	web_image("Home Button", 
		"Alt=Home Button", 
		"Snapshot=t8.inf", 
		LAST);

	lr_end_transaction("WT3_T21_Travel_Home",LR_AUTO);

	lr_start_transaction("WT3_T22_Travel_Search_Flight");

	web_image("Search Flights Button", 
		"Alt=Search Flights Button", 
		"Ordinal=1", 
		"Snapshot=t9.inf", 
		LAST);

	/* Request with GET method to URL "http://127.0.0.1:1080/WebTours/classes/" failed during recording. Server response : 403*/

	/* Request with GET method to URL "http://127.0.0.1:1080/WebTours/classes/" failed during recording. Server response : 403*/

	lr_end_transaction("WT3_T22_Travel_Search_Flight",LR_AUTO);

	lr_start_transaction("WT3_T23_Travel_Flight_Lookup");

	web_submit_form("reservations.pl", 
		"Snapshot=t10.inf", 
		ITEMDATA, 
		"Name=depart", "Value=Denver", ENDITEM, 
		"Name=departDate", "Value=07/18/2015", ENDITEM, 
		"Name=arrive", "Value=Los Angeles", ENDITEM, 
		"Name=returnDate", "Value=07/19/2015", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=roundtrip", "Value=<OFF>", ENDITEM, 
		"Name=seatPref", "Value=None", ENDITEM, 
		"Name=seatType", "Value=Coach", ENDITEM, 
		"Name=findFlights.x", "Value=39", ENDITEM, 
		"Name=findFlights.y", "Value=10", ENDITEM, 
		LAST);

	lr_end_transaction("WT3_T23_Travel_Flight_Lookup",LR_AUTO);

	lr_start_transaction("WT3_T24_Find_Flight");

	web_submit_form("reservations.pl_2", 
		"Snapshot=t11.inf", 
		ITEMDATA, 
		"Name=outboundFlight", "Value=030;251;07/18/2015", ENDITEM, 
		"Name=reserveFlights.x", "Value=47", ENDITEM, 
		"Name=reserveFlights.y", "Value=4", ENDITEM, 
		LAST);

	lr_end_transaction("WT3_T24_Find_Flight",LR_AUTO);

	lr_start_transaction("WT3_T25_Travel_Payment_Details");

	web_submit_form("reservations.pl_3", 
		"Snapshot=t12.inf", 
		ITEMDATA, 
		"Name=firstName", "Value=Jojo", ENDITEM, 
		"Name=lastName", "Value=Bean", ENDITEM, 
		"Name=address1", "Value=123 wood duck dr", ENDITEM, 
		"Name=address2", "Value=Euless/TX/76039", ENDITEM, 
		"Name=pass1", "Value=Jojo Bean", ENDITEM, 
		"Name=creditCard", "Value=123456789", ENDITEM, 
		"Name=expDate", "Value=12/15", ENDITEM, 
		"Name=saveCC", "Value=<OFF>", ENDITEM, 
		"Name=buyFlights.x", "Value=61", ENDITEM, 
		"Name=buyFlights.y", "Value=4", ENDITEM, 
		LAST);

	lr_end_transaction("WT3_T25_Travel_Payment_Details",LR_AUTO);

	lr_start_transaction("WT3_T33Travel_Check_Itinerary");

	web_image("Itinerary Button", 
		"Alt=Itinerary Button", 
		"Ordinal=1", 
		"Snapshot=t13.inf", 
		LAST);

	lr_end_transaction("WT3_T33Travel_Check_Itinerary",LR_AUTO);

	lr_start_transaction("WT3_T09_SignOut");

	web_image("SignOff Button", 
		"Alt=SignOff Button", 
		"Ordinal=1", 
		"Snapshot=t14.inf", 
		LAST);

	lr_end_transaction("WT3_T09_SignOut",LR_AUTO);

	return 0;
}
