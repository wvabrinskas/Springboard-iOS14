/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:25 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContactsFoundation/ContactsFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CNFoundationSocialProfile : NSObject <NSCopying> {

	NSString* _urlString;
	NSString* _username;
	NSString* _userIdentifier;
	NSString* _service;
	NSString* _displayName;

}

@property (copy,readonly) NSString * urlString;                   //@synthesize urlString=_urlString - In the implementation block
@property (copy,readonly) NSString * username;                    //@synthesize username=_username - In the implementation block
@property (copy,readonly) NSString * userIdentifier;              //@synthesize userIdentifier=_userIdentifier - In the implementation block
@property (copy,readonly) NSString * service;                     //@synthesize service=_service - In the implementation block
@property (copy,readonly) NSString * displayName;                 //@synthesize displayName=_displayName - In the implementation block
+(id)emptySocialProfile;
-(NSString *)userIdentifier;
-(NSString *)urlString;
-(NSString *)username;
-(unsigned long long)hash;
-(BOOL)isEmpty;
-(NSString *)displayName;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithUrlString:(id)arg1 username:(id)arg2 userIdentifier:(id)arg3 service:(id)arg4 displayName:(id)arg5 ;
-(NSString *)service;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

