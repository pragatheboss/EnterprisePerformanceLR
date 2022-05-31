Action()
{

	web_url("index.php", 
		"URL=http://automationpractice.com/index.php", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=http://192.168.1.121:8008/ssdp/device-desc.xml", "Referer=", ENDITEM, 
		"Url=/themes/default-bootstrap/img/footer-bg.png", "Referer=http://automationpractice.com/themes/default-bootstrap/css/global.css", ENDITEM, 
		"Url=/themes/default-bootstrap/font/fontawesome-webfont.woff?v=3.2.1", "Referer=http://automationpractice.com/themes/default-bootstrap/css/global.css", ENDITEM, 
		"Url=/themes/default-bootstrap/img/icon/form-ok.png", "Referer=http://automationpractice.com/themes/default-bootstrap/css/global.css", ENDITEM, 
		"Url=/themes/default-bootstrap/img/bg_bt.gif", "Referer=http://automationpractice.com/themes/default-bootstrap/css/global.css", ENDITEM, 
		"Url=/themes/default-bootstrap/img/order-step-current.png", "Referer=http://automationpractice.com/themes/default-bootstrap/css/global.css", ENDITEM, 
		"Url=/themes/default-bootstrap/img/order-step-a.png", "Referer=http://automationpractice.com/themes/default-bootstrap/css/global.css", ENDITEM, 
		"Url=/themes/default-bootstrap/img/order-step-done-last.png", "Referer=http://automationpractice.com/themes/default-bootstrap/css/global.css", ENDITEM, 
		"Url=/themes/default-bootstrap/img/order-step-done.png", "Referer=http://automationpractice.com/themes/default-bootstrap/css/global.css", ENDITEM, 
		"Url=/themes/default-bootstrap/img/bankwire.png", "Referer=http://automationpractice.com/themes/default-bootstrap/css/global.css", ENDITEM, 
		"Url=/themes/default-bootstrap/img/cheque.png", "Referer=http://automationpractice.com/themes/default-bootstrap/css/global.css", ENDITEM, 
		LAST);

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_url("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=101", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("v1_GetModels", 
		"URL=https://optimizationguide-pa.googleapis.com/v1_GetModels?key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/x-protobuf", 
		"Referer=", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		"EncType=application/x-protobuf", 
		"BodyBinary=\nl\\x08\\x08\\x10\\xF1\\xD9\\xF8\\xE7\\x8C0 \\x082_\nYtype.googleapis.com/google.internal.chrome.optimizationguide.v1.PageEntitiesModelMetadata\\x12\\x02\\x08\\x0B\\x18\\x06*\\x05en-US", 
		LAST);

	web_custom_request("json", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=11:PR42-SBHv6MnZOP1tLavcctTD4uMg-PzuYcrP1J0AXI&cup2hreq=3676bb603fb6d4c62fb78f74932a997306137ba99c99c4bc274fe0e72a9bc5f2", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chromecrx\",\"acceptformat\":\"crx3\",\"app\":[{\"appid\":\"ghbmnnjooekpmoecnnnilnnbdlolhkhi\",\"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"external\",\"packages\":{\"package\":[{\"fp\":\"1.1f57dab48a51560b9890c8ccd9a26178e70a9b48f209d1ff670e71be6de0df62\"}]},\"ping\":{\"ping_freshness\":\"{c65d9cba-8e22-4bca-ab4b-9f1561835596}\",\"rd\":5628},\"updatecheck\":{},\"version\":\"1.42.0\"},{\"appid\":\"nmmhkkegccagdldgiimedpiccmgmieda\",\""
		"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"other\",\"packages\":{\"package\":[{\"fp\":\"2.1.0.0.6\"}]},\"ping\":{\"ping_freshness\":\"{172740ce-35e0-42f3-888c-71ec141a6731}\",\"rd\":5628},\"updatecheck\":{},\"version\":\"1.0.0.6\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":true,\"physmemory\":7,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"lang\":\"en-US\",\"nacl_arch\":\"x86-64\",\"os\":{\"arch"
		"\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.22000.675\"},\"prodversion\":\"101.0.4951.67\",\"protocol\":\"3.1\",\"requestid\":\"{eaf162ac-be54-4466-abf1-d32d3ed69161}\",\"sessionid\":\"{94fae10f-4a16-4ba7-b201-be221423d42e}\",\"updaterversion\":\"101.0.4951.67\"}}", 
		LAST);

	web_add_cookie("CONSENT=YES+srp.gws-20220309-0-RC1.en+FX+789; DOMAIN=accounts.google.com");

	web_add_cookie("SMSV=ADHTe-B4G-EUhOfBjhjdOeXkcOFYt75ltHy49Xfij7dPqc-VnyKV_zxKzrcPLhRclH1_KPS-Oj0enZZqMivCZQnWUqmGgQJYJqp_TjfWpU0dU2gmufV1jnI; DOMAIN=accounts.google.com");

	web_add_cookie("ACCOUNT_CHOOSER=AFx_qI5G0f8zjQ4kd9MOXlvLhCKr5y0crYddefAPzYPk78Q8YxMqc-neTmn1fEn8WFaNwdmi2cVPnK4WqIoJGOYs1UIUACGIn1sXfBPKMw3SuKPKIsRAOGIO_T4bD5YDXhzudcXqQpY5bQLmsqEwAPNPxzEIZTBE2w; DOMAIN=accounts.google.com");

	web_add_cookie("SEARCH_SAMESITE=CgQIgJUB; DOMAIN=accounts.google.com");

	web_add_cookie("SID=KAiVm3UzVuOJuf2NKRVgfoxFS-u2vQCkN-JsGkS1YWeAxW80gefm6564FEidtQlePZ6aWw.; DOMAIN=accounts.google.com");

	web_add_cookie("__Secure-1PSID=KAiVm3UzVuOJuf2NKRVgfoxFS-u2vQCkN-JsGkS1YWeAxW80qhdDrfl7eUfZvzSh0fDPuQ.; DOMAIN=accounts.google.com");

	web_add_cookie("__Secure-3PSID=KAiVm3UzVuOJuf2NKRVgfoxFS-u2vQCkN-JsGkS1YWeAxW801UHRnxMOvW39NBL7FMIp5g.; DOMAIN=accounts.google.com");

	web_add_cookie("HSID=A4i43MtkFsn-5rDjq; DOMAIN=accounts.google.com");

	web_add_cookie("SSID=AryQjyxC0uDaQB_Ys; DOMAIN=accounts.google.com");

	web_add_cookie("APISID=rcus5smFFJAimV4z/AWmKWjrHATnrU0OK4; DOMAIN=accounts.google.com");

	web_add_cookie("SAPISID=84vCLABwt5BDAF6-/ALsBluzVn7x21eM7d; DOMAIN=accounts.google.com");

	web_add_cookie("__Secure-1PAPISID=84vCLABwt5BDAF6-/ALsBluzVn7x21eM7d; DOMAIN=accounts.google.com");

	web_add_cookie("__Secure-3PAPISID=84vCLABwt5BDAF6-/ALsBluzVn7x21eM7d; DOMAIN=accounts.google.com");

	web_add_cookie("__Host-GAPS=1:73sg5d1mgDlpvvs_zp0dfaoVfw1TeWsxrGD_R4HKo1i5sNY8h4x_SP46CET-5oA75BVtekQpc8LwDdpskgS2P_5p3DAqRw:3JkpUjpX2AlAdFdO; DOMAIN=accounts.google.com");

	web_add_cookie("LSID=o.chat.google.com|o.mail.google.com|o.meet.google.com|s.GB|s.youtube:KAiVm6s_Yt0p7N_1Hy1fbBklZfqGu2veGp23jwKAOSnYn9ygHRz6UUM--bllhn1SYrIjFQ.; DOMAIN=accounts.google.com");

	web_add_cookie("__Host-1PLSID=o.chat.google.com|o.mail.google.com|o.meet.google.com|s.GB|s.youtube:KAiVm6s_Yt0p7N_1Hy1fbBklZfqGu2veGp23jwKAOSnYn9ygsHlCiNHLTQoTfLOnsoIPPQ.; DOMAIN=accounts.google.com");

	web_add_cookie("__Host-3PLSID=o.chat.google.com|o.mail.google.com|o.meet.google.com|s.GB|s.youtube:KAiVm6s_Yt0p7N_1Hy1fbBklZfqGu2veGp23jwKAOSnYn9yglhSSNmxQgXn5PWk9s66LLQ.; DOMAIN=accounts.google.com");

	web_add_cookie("AEC=AakniGO8zsqpU4dusz6IdnFdhoepKFfU2g0FGpJXaT5DwTEKicjn9JilQg; DOMAIN=accounts.google.com");

	web_add_cookie("NID=511=FZe2Wr5Yx_G6dZ4s3YO4OyDTqhXehwu3HQEmd3eFvud_Fv6innhehVPWJzE4y_gMJ4mfPJwOvrSky-NbnmGnyLlY5-4a80nlb1XuT0yzsB4a_cHKeCM-VYrMmOJtErJcFkQPJc2OfyoNn5AqofgRpGYsalGrVHTKHcJW3GzuTqSGNuY6NElxsgqheIJ2cQrK3MnN7Kh6tjuamiNHOH7jbfRuFb43zYa3bEOdBnSD9vlWFkMnd5Eghvjjm6c_VCiIVP2WQxQjN4SRvuOaYwwTXEFLVeQh9_DyJtoXA2OgGWB8xSgORgTi; DOMAIN=accounts.google.com");

	web_add_cookie("1P_JAR=2022-05-31-05; DOMAIN=accounts.google.com");

	web_add_cookie("SIDCC=AJi4QfFyZty6bAB28nFzMlQptMju4fMn9WzE_rqoMes1AbPIewaindBWCyoMZ1bO7yed_tNVzg; DOMAIN=accounts.google.com");

	web_add_cookie("__Secure-3PSIDCC=AJi4QfGS9ECr-vQn_Ix1AvUdzFkJTAtRc71GoR6NnOk7kZ5YcJ1ykB4j0HZ9gPS4-4xBXyx5cQ; DOMAIN=accounts.google.com");

	web_custom_request("ListAccounts", 
		"URL=https://accounts.google.com/ListAccounts?gpsia=1&source=ChromiumBrowser&json=standard", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		"Body= ", 
		LAST);

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

	web_custom_request("token", 
		"URL=https://www.googleapis.com/oauth2/v4/token", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t33.inf", 
		"Mode=HTML", 
		"Body=client_id=77185425430.apps.googleusercontent.com&client_secret=OTJgUOQcT7lO7GsGZq2G4IlT&grant_type=refresh_token&refresh_token=1//03UiPhFvClKtJCgYIARAAGAMSNwF-L9IrFXJJQhUbLjYdkkTUiCo3Rx1n8upgosvfGq-yZjVgiA8z7j5mXKuEHrO-jmQRx2jc7ZA&scope=https://www.googleapis.com/auth/chromesync", 
		EXTRARES, 
		"Url=http://automationpractice.com/themes/default-bootstrap/css/modules/homeslider/images/bx_loader.gif", "Referer=http://automationpractice.com/themes/default-bootstrap/css/modules/homeslider/homeslider.css", ENDITEM, 
		"Url=http://fonts.gstatic.com/s/opensans/v29/memvYaGs126MiZpBA-UvWbX2vVnXBbObj2OVTS-muw.woff2", "Referer=http://fonts.googleapis.com/", ENDITEM, 
		"Url=https://content-autofill.googleapis.com/v1/pages/ChRDaHJvbWUvMTAxLjAuNDk1MS42NxIQCeqL1ZB2A1shEgUN8aNb4xIQCdQUgFe9AOfPEgUNeG8SGRirqcoB?alt=proto", "Referer=", ENDITEM, 
		"Url=https://connect.facebook.net/en_US/all.js", "Referer=http://automationpractice.com/", ENDITEM, 
		"Url=https://www.facebook.com/x/oauth/status?client_id=334341610034299&input_token&origin=1&redirect_uri=http%3A%2F%2Fautomationpractice.com%2Findex.php&sdk=joey&wants_cookie_data=false", "Referer=http://automationpractice.com/", ENDITEM, 
		LAST);

	web_url("like_box.php", 
		"URL=https://www.facebook.com/plugins/like_box.php?app_id=334341610034299&channel=https%3A%2F%2Fstaticxx.facebook.com%2Fx%2Fconnect%2Fxd_arbiter%2F%3Fversion%3D46%23cb%3Df3f69a146935a7c%26domain%3Dautomationpractice.com%26is_canvas%3Dfalse%26origin%3Dhttp%253A%252F%252Fautomationpractice.com%252Ff1394a1925f28c%26relation%3Dparent.parent&color_scheme=light&container_width=330&header=false&href=https%3A%2F%2Fwww.facebook.com%2Fprestashop&locale=en_US&sdk=joey&show_border=false&show_faces=true&stream="
		"false", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://automationpractice.com/", 
		"Snapshot=t34.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://safebrowsing.googleapis.com/v4/fullHashes_find?$req="
		"Ch0KDGdvb2dsZWNocm9tZRINMTAxLjAuNDk1MS42NxIbCg0IBRAGGAEiAzAwMTABEKfwDRoCGAOWU5IyEhsKDQgBEAYYASIDMDAxMAEQgeAKGgIYA_S0aWgSGwoNCAcQBhgBIgMwMDEwARCJpAsaAhgD0dTckRIZCg0IARAGGAEiAzAwMTADEBQaAhgDWbx0fRIaCg0IARAIGAEiAzAwMTAEEK4oGgIYA8vH_HISGgoNCA8QBhgBIgMwMDEwARDicRoCGAPW4AyKEhkKDQgKEAgYASIDMDAxMAEQBxoCGAN3Vzc4EhkKDQgJEAYYASIDMDAxMAEQIBoCGANEBq4zEhoKDQgIEAYYASIDMDAxMAEQ1A8aAhgD6OfM5RIbCg0IDRAGGAEiAzAwMTABEPe8ARoCGAP_5wMgEhsKDQgDEAYYASIDMDAxMAEQirEKGgIYA7xnKlgSGwoNCA4QBhgBIgMwMDEwARCzuAYaAhgD3bRZFxIaCg0IEB"
		"AGGAEiAzAwMTABEIkSGgIYAw0XSqoaLAgBCAMIBQgGCAcICAgJCAoIDQgOCA8IEAgREAEQCBoGCgRxxHrqIAEgAyAE&$ct=application/x-protobuf&key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw", "Referer=", ENDITEM, 
		"Url=https://static.xx.fbcdn.net/rsrc.php/v3/yF/l/0,cross/Hq7X--n9goh.css?_nc_x=Ij3Wp8lg5Kz", "Referer=https://www.facebook.com/", ENDITEM, 
		LAST);

	/* SignIn */

	web_url("index.php_2", 
		"URL=http://automationpractice.com/index.php?controller=my-account", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://automationpractice.com/index.php", 
		"Snapshot=t35.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(13);

	web_custom_request("json_2", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=11:7fptCex9kyvOgQv9hI7JucXxBaTFnvKBHtAxW_0mtcI&cup2hreq=1b21b3d28e295292756b34b18ccf8eeea6c6b623fddecda2439cf4cb4db628e9", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t36.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3\",\"app\":[{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"RXQR\",\"cohort\":\"1:15j3:\",\"cohorthint\":\"Win (Including up-to-date)\",\"cohortname\":\"Win (Including up-to-date)\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.aeedb246d19256a956fedaa89fb62423ae5bd8855a2a1f3189161cf045645a19\"}]},\"ping\":{\"ping_freshness\":\"{854a90b8-3557-41aa-b253-34e1dcff2045}\",\"rd\":5628},\"updatecheck\""
		":{},\"version\":\"1.3.36.141\"},{\"appid\":\"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"RXQR\",\"cohort\":\"1::\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{4bb446d0-829e-47fc-a6ef-cb97694d8cf9}\",\"rd\":5628},\"updatecheck\":{},\"version\":\"4.10.2449.0\"},{\"appid\":\"hnimpnehoodheedghdeeijklkeaacbdc\",\"brand\":\"RXQR\",\"cohort\":\"1::\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.6f6bc93dcd62dc251850d2ff458fda96083ceb7fbe8eeb11248b8485ef2aea23\"}]},\"ping\":{\""
		"ping_freshness\":\"{e67c13ec-2616-4960-9f72-1cb3741eb8d9}\",\"rd\":5628},\"updatecheck\":{},\"version\":\"0.57.44.2492\"},{\"accept_locale\":\"ENUS500000\",\"appid\":\"obedbbhbpmojnkanicioggnmelmoomoc\",\"brand\":\"RXQR\",\"cohort\":\"1:s6f:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.75c0917aea02e762102b43e49839262173b6c531e85d03459493d680213755b5\"}]},\"ping\":{\"ping_freshness\":\"{61daf48a-2b39-4005-a03e-f4b075d61754}\",\"rd\":5628}"
		",\"updatecheck\":{},\"version\":\"20220409.440702358\"},{\"appid\":\"lmelglejhemejginpboagddgdfbepgmp\",\"brand\":\"RXQR\",\"cohort\":\"1:lwl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.526171d5c3db17beffadfbcd3897c1e3c9dad3bcfa114ec36045d150dca60811\"}]},\"ping\":{\"ping_freshness\":\"{8ee5cd17-b6fe-4b1b-93f0-ed68d43aa037}\",\"rd\":5628},\"updatecheck\":{},\"version\":\"332\"},{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\""
		":\"RXQR\",\"cohort\":\"1:bm1:15m9@0.1\",\"cohorthint\":\"M54AndUp\",\"cohortname\":\"M54AndUp\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.53b83738fad69a9f3db36848834a1d5003880033cae857eadfc37d3802dfcb8c\"}]},\"ping\":{\"ping_freshness\":\"{df07eed4-e30b-4438-b774-9111a6cf3435}\",\"rd\":5628},\"updatecheck\":{},\"version\":\"9.35.0\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\"brand\":\"RXQR\",\"cohort\":\"1:j5l:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\""
		":true,\"packages\":{\"package\":[{\"fp\":\"1.fd515ec0dc30d25a09641b8b83729234bc50f4511e35ce17d24fd996252eaace\"}]},\"ping\":{\"ping_freshness\":\"{7f77ffd8-0982-4034-88de-c6ca610e1c23}\",\"rd\":5628},\"updatecheck\":{},\"version\":\"7\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\"brand\":\"RXQR\",\"cohort\":\"1:cux:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.2c15227a2823f31c7f3728e85a39bd87040d30562f3fa8d1c6faeb20f93e3cc8\"}]},"
		"\"ping\":{\"ping_freshness\":\"{00b8080d-65da-4f84-9db7-dafab25db377}\",\"rd\":5628},\"tag\":\"default\",\"updatecheck\":{},\"version\":\"50\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"RXQR\",\"cohort\":\"1:jcl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.334248dca720bf78ebfa3188c939b52dc4664d120a780c653a450094bf75366d\"}]},\"ping\":{\"ping_freshness\":\"{154662e1-43ac-488b-9f87-5be008fe82b2}\",\"rd\":5628},\""
		"updatecheck\":{},\"version\":\"7369\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\"RXQR\",\"cohort\":\"1::\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.ab8d70a60ce0fba1355fad4edab88fd4d1bccc566b230998180183d1d776992b\"}]},\"ping\":{\"ping_freshness\":\"{121539b0-b97c-45ea-a0ce-1243b463e5d4}\",\"rd\":5628},\"updatecheck\":{},\"version\":\"1.0.0.13\"},{\"appid\":\"gkmgaooipdjhmangpemjhigmamcehddo\",\"brand\":\"RXQR\",\"cohort\":\"1:pw3:\",\"cohorthint\":\"Stable\",\""
		"cohortname\":\"Stable\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.8d72c1be146d9732d4e14426908065214a0c673fd14d166d9eb1dc8780920158\"}]},\"ping\":{\"ping_freshness\":\"{a7be4617-b889-4048-9443-a18716d86f5f}\",\"rd\":5628},\"tag\":\"eset_exp_b\",\"updatecheck\":{},\"version\":\"100.282.200\"},{\"appid\":\"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"RXQR\",\"cohort\":\"1:ofl:\",\"cohorthint\":\"stable64\",\"cohortname\":\"stable64\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\""
		":\"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\"ping_freshness\":\"{f3c222cb-edfa-40a3-a555-f3fb7754a5be}\",\"rd\":5628},\"updatecheck\":{},\"version\":\"2018.8.8.0\"},{\"appid\":\"efniojlnjndmcbiieegkicadnoecjjef\",\"brand\":\"RXQR\",\"cohort\":\"1:zkl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.f0807b94ce55989abafd76b13b77583b26dfeae3251c7af920a23a2e5873e6fa\"}]},\"ping\":{\"ping_freshness\":\""
		"{7f74499b-8e10-4065-932c-da8752613982}\",\"rd\":5628},\"updatecheck\":{},\"version\":\"250\"},{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\"RXQR\",\"cohort\":\"1:s7x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.6a066c6bfee8522e580e2035d4087507a57c361ab7bc01789aca33b2fe6a1f43\"}]},\"ping\":{\"ping_freshness\":\"{73b73cb2-aef3-4e43-afb5-a277d01ebcbf}\",\"rd\":5628},\"updatecheck\":{},\"version\":\"2822\"},{\"appid\":\""
		"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"brand\":\"RXQR\",\"cohort\":\"1:ut9:\",\"cohorthint\":\"M80AndAbove\",\"cohortname\":\"M80AndAbove\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.9c52ae87b64a91c37be31d915c35b9c2a98be728663f4ba4d4048c1ab56a17f3\"}]},\"ping\":{\"ping_freshness\":\"{73e9c346-a017-4e62-8e02-38708d4ad0e0}\",\"rd\":5628},\"updatecheck\":{},\"version\":\"2022.5.23.1144\"},{\"appid\":\"jamhcnnkihinmdlkakkaopbjbbcngflc\",\"brand\":\"RXQR\",\"cohort\":\"1:wvr:\",\"cohorthint"
		"\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.84730de40cf7dac920a940b1372520f20a1b516bd1248eb2e35c307698895595\"}]},\"ping\":{\"ping_freshness\":\"{68df9bcd-1610-4926-bf57-c788049aadfa}\",\"rd\":5628},\"updatecheck\":{},\"version\":\"104.0.5093.0\"},{\"appid\":\"dhlpobdgcjafebgbbhjdnapejmpkgiie\",\"brand\":\"RXQR\",\"cohort\":\"1:z9x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\""
		"1.0c24e9bd976adffa987e08fc54dc0950c84cf18f9cdb4c5caabc6acf24887c4f\"}]},\"ping\":{\"ping_freshness\":\"{ae43347b-2817-4a46-bc9b-50f67376d2c2}\",\"rd\":5628},\"updatecheck\":{},\"version\":\"20220505\"},{\"appid\":\"ojhpjlocmbogdgmfpkhlaaeamibhnphh\",\"brand\":\"RXQR\",\"cohort\":\"1:w0x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.478aa915e78878e332a0b4bb4d2a6fb67ff1c7f7b62fe906f47095ba5ae112d0\"}]},\"ping\":{\"ping_freshness\":\""
		"{f8cf753c-fbe0-486a-b895-7a68e47764f8}\",\"rd\":5628},\"updatecheck\":{},\"version\":\"1\"},{\"appid\":\"pdafiollngonhoadbmdoemagnfpdphbe\",\"brand\":\"RXQR\",\"cohort\":\"1:vz3:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.54b93e249d02a0f9061e8f70866d4668a0260db9ae43483810ab78f97f3eaa2a\"}]},\"ping\":{\"ping_freshness\":\"{75f99723-6cb5-473e-8139-7058378910cd}\",\"rd\":5628},\"updatecheck\":{},\"version\":\"2021.8.17.1300\"},{\"appid\""
		":\"laoigpblnllgcgjnjnllmfolckpjlhki\",\"brand\":\"RXQR\",\"cohort\":\"1:10zr:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.29661be65c8fb50d3d4df2fe040a1cc6dd525f50a95850aae6a191301c3de744\"}]},\"ping\":{\"ping_freshness\":\"{b29eae42-1b95-493c-bd6c-f433be4470db}\",\"rd\":5628},\"updatecheck\":{},\"version\":\"1.0.7.1652906823\"},{\"appid\":\"imefjhfbkmcmebodilednhmaccmincoa\",\"brand\":\"RXQR\",\"cohort\":\"1:zor:\",\"cohorthint\":\""
		"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.9b212fb00a2ff3bc981a89aa8dd0f52c60f7baeb6f958148396af27431c8f097\"}]},\"ping\":{\"ping_freshness\":\"{043af48b-5cea-4d6f-a655-4cff2f76ff18}\",\"rd\":5628},\"tag\":\"default\",\"updatecheck\":{},\"version\":\"29.0\"},{\"appid\":\"eeigpngbgcognadeebkilcpcaedhellh\",\"brand\":\"RXQR\",\"cohort\":\"1:w59:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\""
		"1.c64c9c1008f3ba5f6e18b3ca524bc98dcd8acfae0a2720a8f1f3ef0f8d643d05\"}]},\"ping\":{\"ping_freshness\":\"{f27e1323-cf23-4c0e-b50d-8e36ff1635db}\",\"rd\":5628},\"updatecheck\":{},\"version\":\"2020.11.2.164946\"},{\"_internal_experimental_sets\":\"false\",\"_v2_format_plz\":\"true\",\"appid\":\"gonpemdgkjcecdgbnaabipppbmgfggbe\",\"brand\":\"RXQR\",\"cohort\":\"1:z1x:\",\"cohorthint\":\"General release\",\"cohortname\":\"General release\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\""
		"1.c51d23bc0653142853b0d9dc8ba00f504aaae8a2a5b290e539b8790d88c0dcbe\"}]},\"ping\":{\"ping_freshness\":\"{77552215-5f0c-436b-aba1-241c767773ab}\",\"rd\":5628},\"updatecheck\":{},\"version\":\"2022.2.15.1\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":true,\"physmemory\":7,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"lang\":\"en-US\",\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows"
		"\",\"version\":\"10.0.22000.675\"},\"prodversion\":\"101.0.4951.67\",\"protocol\":\"3.1\",\"requestid\":\"{67c34972-090b-4f8e-8afe-3a1caf2b5e19}\",\"sessionid\":\"{9272d575-4868-44c4-b0a7-a776ee3203e7}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.36.132\"},\"updaterversion\":\"101.0.4951.67\"}}", 
		LAST);

	/* Enter Details and Sign In */

	web_submit_data("index.php_3", 
		"Action=http://automationpractice.com/index.php?controller=authentication", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://automationpractice.com/index.php?controller=authentication&back=my-account", 
		"Snapshot=t37.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=email", "Value=admin@xyz.com", ENDITEM, 
		"Name=passwd", "Value=admin@123", ENDITEM, 
		"Name=back", "Value=my-account", ENDITEM, 
		"Name=SubmitLogin", "Value=", ENDITEM, 
		LAST);

	/* Search Dress */

	lr_think_time(23);

	web_url("index.php_4", 
		"URL=http://automationpractice.com/index.php?controller=search&q=dress&limit=10&timestamp=1653974866930&ajaxSearch=1&id_lang=1", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://automationpractice.com/index.php?controller=my-account", 
		"Snapshot=t38.inf", 
		"Mode=HTML", 
		LAST);

	web_url("index.php_5", 
		"URL=http://automationpractice.com/index.php?controller=search&orderby=position&orderway=desc&search_query=Dress&submit_search=", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://automationpractice.com/index.php?controller=my-account", 
		"Snapshot=t39.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/themes/default-bootstrap/img/jquery/uniform/sprite.png", "Referer=http://automationpractice.com/themes/default-bootstrap/css/autoload/uniform.default.css", ENDITEM, 
		"Url=/themes/default-bootstrap/img/functional-bt-shadow.png", "Referer=http://automationpractice.com/themes/default-bootstrap/css/product_list.css", ENDITEM, 
		"Url=/themes/default-bootstrap/img/price-container-bg.png", "Referer=http://automationpractice.com/themes/default-bootstrap/css/product_list.css", ENDITEM, 
		LAST);

	/* AddToCart */

	web_submit_data("index.php_6", 
		"Action=http://automationpractice.com/index.php?rand=1653974900340", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://automationpractice.com/index.php?controller=search&orderby=position&orderway=desc&search_query=Dress&submit_search=", 
		"Snapshot=t40.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=controller", "Value=cart", ENDITEM, 
		"Name=add", "Value=1", ENDITEM, 
		"Name=ajax", "Value=true", ENDITEM, 
		"Name=qty", "Value=1", ENDITEM, 
		"Name=id_product", "Value=4", ENDITEM, 
		"Name=token", "Value=14ed5364501ea4d54711cea030a9b753", ENDITEM, 
		EXTRARES, 
		"Url=/img/p/1/0/10-cart_default.jpg", "Referer=http://automationpractice.com/index.php?controller=search&orderby=position&orderway=desc&search_query=Dress&submit_search=", ENDITEM, 
		LAST);

	/* Proceed toCheckout */

	lr_think_time(15);

	web_url("index.php_7", 
		"URL=http://automationpractice.com/index.php?controller=order", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://automationpractice.com/index.php?controller=search&orderby=position&orderway=desc&search_query=Dress&submit_search=", 
		"Snapshot=t41.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/themes/default-bootstrap/img/cart-shadow.png", "Referer=http://automationpractice.com/themes/default-bootstrap/css/modules/blockcart/blockcart.css", ENDITEM, 
		LAST);

	lr_think_time(19);

	web_url("Proceed to checkout", 
		"URL=http://automationpractice.com/index.php?controller=order&step=1", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://automationpractice.com/index.php?controller=order", 
		"Snapshot=t42.inf", 
		"Mode=HTML", 
		LAST);

	/* SummaryProceedtoCheckout */

	/* AddressProceedtoCheckout */

	lr_think_time(26);

	web_submit_data("index.php_8", 
		"Action=http://automationpractice.com/index.php?controller=order", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://automationpractice.com/index.php?controller=order&step=1", 
		"Snapshot=t43.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=id_address_delivery", "Value=678197", ENDITEM, 
		"Name=same", "Value=1", ENDITEM, 
		"Name=message", "Value=", ENDITEM, 
		"Name=step", "Value=2", ENDITEM, 
		"Name=back", "Value=", ENDITEM, 
		"Name=processAddress", "Value=", ENDITEM, 
		LAST);

	/* Checkbox */

	/* ShippingProceedtoCheckout */

	lr_think_time(24);

	web_submit_data("index.php_9", 
		"Action=http://automationpractice.com/index.php?controller=order&multi-shipping=", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://automationpractice.com/index.php?controller=order", 
		"Snapshot=t44.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=delivery_option[678197]", "Value=2,", ENDITEM, 
		"Name=cgv", "Value=1", ENDITEM, 
		"Name=step", "Value=3", ENDITEM, 
		"Name=back", "Value=", ENDITEM, 
		"Name=processCarrier", "Value=", ENDITEM, 
		LAST);

	/* PaybyBankWire */

	lr_think_time(17);

	web_url("Pay by bank wire (order processing will be longer)", 
		"URL=http://automationpractice.com/index.php?fc=module&module=bankwire&controller=payment", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://automationpractice.com/index.php?controller=order&multi-shipping=", 
		"Snapshot=t45.inf", 
		"Mode=HTML", 
		LAST);

	/* ConfirmMyOrder */

	web_submit_data("index.php_10", 
		"Action=http://automationpractice.com/index.php?fc=module&module=bankwire&controller=validation", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://automationpractice.com/index.php?fc=module&module=bankwire&controller=payment", 
		"Snapshot=t46.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=currency_payement", "Value=1", ENDITEM, 
		LAST);

	/* SignOut */

	web_url("Sign out", 
		"URL=http://automationpractice.com/index.php?mylogout=", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://automationpractice.com/index.php?controller=order-confirmation&id_cart=4665700&id_module=3&id_order=440830&key=9e04cea3a8bb5602e5ef18a2f0f73286", 
		"Snapshot=t47.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}