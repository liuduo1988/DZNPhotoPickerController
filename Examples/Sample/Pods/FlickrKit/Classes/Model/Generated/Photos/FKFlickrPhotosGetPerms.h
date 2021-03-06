//
//  FKFlickrPhotosGetPerms.h
//  FlickrKit
//
//  Generated by FKAPIBuilder on 12 Jun, 2013 at 17:19.
//  Copyright (c) 2013 DevedUp Ltd. All rights reserved. http://www.devedup.com
//
//  DO NOT MODIFY THIS FILE - IT IS MACHINE GENERATED


#import "FKFlickrAPIMethod.h"

typedef enum {
	FKFlickrPhotosGetPermsError_PhotoNotFound = 1,		 /* The photo id passed was not a valid photo id of a photo belonging to the calling user. */
	FKFlickrPhotosGetPermsError_InvalidSignature = 96,		 /* The passed signature was invalid. */
	FKFlickrPhotosGetPermsError_MissingSignature = 97,		 /* The call required signing but no signature was sent. */
	FKFlickrPhotosGetPermsError_LoginFailedOrInvalidAuthToken = 98,		 /* The login details or auth token passed were invalid. */
	FKFlickrPhotosGetPermsError_UserNotLoggedInOrInsufficientPermissions = 99,		 /* The method requires user authentication but the user was not logged in, or the authenticated method call did not have the required permissions. */
	FKFlickrPhotosGetPermsError_InvalidAPIKey = 100,		 /* The API key passed was not valid or has expired. */
	FKFlickrPhotosGetPermsError_ServiceCurrentlyUnavailable = 105,		 /* The requested service is temporarily unavailable. */
	FKFlickrPhotosGetPermsError_FormatXXXNotFound = 111,		 /* The requested response format was not found. */
	FKFlickrPhotosGetPermsError_MethodXXXNotFound = 112,		 /* The requested method was not found. */
	FKFlickrPhotosGetPermsError_InvalidSOAPEnvelope = 114,		 /* The SOAP envelope send in the request could not be parsed. */
	FKFlickrPhotosGetPermsError_InvalidXMLRPCMethodCall = 115,		 /* The XML-RPC request document could not be parsed. */
	FKFlickrPhotosGetPermsError_BadURLFound = 116,		 /* One or more arguments contained a URL that has been used for abuse on Flickr. */

} FKFlickrPhotosGetPermsError;

/*

Get permissions for a photo.


Response:

<perms id="2733" ispublic="1" isfriend="1" isfamily="0" permcomment="0" permaddmeta="1" /> 

*/
@interface FKFlickrPhotosGetPerms : NSObject <FKFlickrAPIMethod>

/* The id of the photo to get permissions for. */
@property (nonatomic, strong) NSString *photo_id; /* (Required) */


@end
