Action()
{
	lr_start_transaction("UC2_Find_ticket");

	web_websocket_send("ID=2", 
		"Buffer={\"messageType\":\"hello\",\"broadcasts\":{\"remote-settings/monitor_changes\":\"\\\"1716893830890\\\"\"},\"use_webpush\":true}", 
		"IsBinary=0", 
		LAST);

	/*Connection ID 2 received buffer WebSocketReceive0*/

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_auto_header("Priority", 
		"u=1");

	web_add_auto_header("DNT", 
		"1");

	web_add_auto_header("Sec-GPC", 
		"1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("WebTours", 
		"URL=http://localhost:1080/WebTours/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	
	
	
	
	
	lr_start_transaction("go_Welcome_Page");
	
	web_reg_find("Text=Welcome to the Web Tours site",LAST);

	web_url("WebTours_2", 
		"URL=http://localhost:1080/WebTours/", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Priority", 
		"u=4");

	web_url("header.html", 
		"URL=http://localhost:1080/WebTours/header.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=http://localhost:1080/WebTours/", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

/*Correlation comment - Do not change!  Original value='139076.244795464HVfDHDtpDtVzzzzHtcQccptAzAf' Name ='userSession' Type ='ResponseBased'*/
	web_reg_save_param_attrib(
		"ParamName=userSession",
		"TagName=input",
		"Extract=value",
		"Name=userSession",
		"Type=hidden",
		SEARCH_FILTERS,
		"IgnoreRedirections=No",
		"RequestUrl=*/nav.pl*",
		LAST);

	web_url("welcome.pl", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?signOff=true", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/WebTours/", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("go_Welcome_Page",LR_AUTO);

	
	
	lr_think_time(58);
	
	
	
	lr_start_transaction("login");
	
	web_reg_find("Text=User password was correct",LAST);

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_header("Origin", 
		"http://localhost:1080");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_submit_data("login.pl",
		"Action=http://localhost:1080/cgi-bin/login.pl",
		"Method=POST",
		"TargetFrame=body",
		"RecContentType=text/html",
		"Referer=http://localhost:1080/cgi-bin/nav.pl?in=home",
		"Snapshot=t5.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=userSession", "Value={userSession}", ENDITEM,
		"Name=username", "Value={login}", ENDITEM,
		"Name=password", "Value={password}", ENDITEM,
		"Name=login.x", "Value=64", ENDITEM,
		"Name=login.y", "Value=15", ENDITEM,
		"Name=JSFormSubmit", "Value=off", ENDITEM,
		LAST);

	lr_end_transaction("login",LR_AUTO);

	
	
	lr_think_time(38);
	
	
	
	lr_start_transaction("go_Flight");
	
	web_reg_find("Text=Find Flight",LAST);

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_url("Search Flights Button", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?page=search", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("go_Flight",LR_AUTO);

	
	
	lr_think_time(86);
	
	
	
	lr_start_transaction("find_Flight_Continue");
	
	web_reg_find("Text=Flight departing from",LAST);

	web_add_auto_header("Origin", 
		"http://localhost:1080");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

/*Correlation comment - Do not change!  Original value='080;792;05/29/2024' Name ='outboundFlight' Type ='ResponseBased'*/
	web_reg_save_param_attrib(
		"ParamName=outboundFlight",
		"TagName=input",
		"Extract=value",
		"Name=outboundFlight",
		"Type=radio",
		SEARCH_FILTERS,
		"IgnoreRedirections=No",
		LAST);

	web_submit_data("reservations.pl",
		"Action=http://localhost:1080/cgi-bin/reservations.pl",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=http://localhost:1080/cgi-bin/reservations.pl?page=welcome",
		"Snapshot=t7.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=advanceDiscount", "Value=0", ENDITEM,
		"Name=depart", "Value={departure}", ENDITEM,
		"Name=departDate", "Value={departureDate}", ENDITEM,
		"Name=arrive", "Value={arrival}", ENDITEM,
		"Name=returnDate", "Value={arrivalDate}", ENDITEM,
		"Name=numPassengers", "Value=1", ENDITEM,
		"Name=seatPref", "Value={seatingPref}", ENDITEM,
		"Name=seatType", "Value={typeOfSeat}", ENDITEM,
		"Name=findFlights.x", "Value=45", ENDITEM,
		"Name=findFlights.y", "Value=11", ENDITEM,
		"Name=.cgifields", "Value=roundtrip", ENDITEM,
		"Name=.cgifields", "Value=seatType", ENDITEM,
		"Name=.cgifields", "Value=seatPref", ENDITEM,
		LAST);

	lr_end_transaction("find_Flight_Continue",LR_AUTO);

	
	
	lr_think_time(48);

	
	
	lr_start_transaction("find_Flight_Continue_Two");
	
	web_reg_find("Text=Payment Details",LAST);

	web_submit_data("reservations.pl_2",
		"Action=http://localhost:1080/cgi-bin/reservations.pl",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=http://localhost:1080/cgi-bin/reservations.pl",
		"Snapshot=t8.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=outboundFlight", "Value={outboundFlight}", ENDITEM,
		"Name=numPassengers", "Value=1", ENDITEM,
		"Name=advanceDiscount", "Value=0", ENDITEM,
		"Name=seatType", "Value={typeOfSeat}", ENDITEM,
		"Name=seatPref", "Value={seatingPref}", ENDITEM,
		"Name=reserveFlights.x", "Value=43", ENDITEM,
		"Name=reserveFlights.y", "Value=9", ENDITEM,
		LAST);

	lr_end_transaction("find_Flight_Continue_Two",LR_AUTO);

	lr_think_time(86);
	
	lr_start_transaction("go_Itinerary");
	
	web_reg_find("Text=User wants the intineraries",LAST);
	web_reg_find("Text=Itinerary",LAST);

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_url("Itinerary Button",
		"URL=http://localhost:1080/cgi-bin/welcome.pl?page=itinerary",
		"TargetFrame=body",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=flights",
		"Snapshot=t10.inf",
		"Mode=HTML",
		LAST);

	lr_end_transaction("go_Itinerary",LR_AUTO);
	
	lr_end_transaction("UC2_Find_ticket", LR_AUTO);

	
	return 0;
}