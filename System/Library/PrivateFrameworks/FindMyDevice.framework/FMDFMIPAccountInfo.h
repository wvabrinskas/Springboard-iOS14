/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/FindMyDevice.framework/FindMyDevice
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL;

@interface FMDFMIPAccountInfo : NSObject <NSSecureCoding> {

	NSString* _username;
	NSString* _dsid;
	NSString* _oneTimeRemoveAuthToken;
	NSURL* _serverURL;

}

@property (nonatomic,copy) NSString * username;                            //@synthesize username=_username - In the implementation block
@property (nonatomic,copy) NSString * dsid;                                //@synthesize dsid=_dsid - In the implementation block
@property (nonatomic,copy) NSString * oneTimeRemoveAuthToken;              //@synthesize oneTimeRemoveAuthToken=_oneTimeRemoveAuthToken - In the implementation block
@property (copy) NSURL * serverURL;                                        //@synthesize serverURL=_serverURL - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setDsid:(NSString *)arg1 ;
-(NSString *)dsid;
-(NSString *)username;
-(void)setServerURL:(NSURL *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSURL *)serverURL;
-(void)setUsername:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)oneTimeRemoveAuthToken;
-(void)setOneTimeRemoveAuthToken:(NSString *)arg1 ;
-(id)initWithUserName:(id)arg1 dsid:(id)arg2 oneTimeRemoveAuthToken:(id)arg3 serverURL:(id)arg4 ;
@end
