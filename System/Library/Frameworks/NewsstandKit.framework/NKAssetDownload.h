/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:08 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/NewsstandKit.framework/NewsstandKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NKIssue, NSString, NSData, NSURLRequest, NSURLConnection, NSDictionary;

@interface NKAssetDownload : NSObject <NSSecureCoding> {

	NKIssue* _issue;
	NSString* _identifier;
	NSData* _userInfoData;
	NSURLRequest* _request;
	NSURLConnection* _connection;
	BOOL _attemptedConnection;
	BOOL _isDecodingValid;

}

@property (copy) NSString * identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (copy) NSURLRequest * URLRequest;                   //@synthesize request=_request - In the implementation block
@property (retain) NSData * userInfoData;                     //@synthesize userInfoData=_userInfoData - In the implementation block
@property (retain) NSURLConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (assign) BOOL attemptedConnection;                  //@synthesize attemptedConnection=_attemptedConnection - In the implementation block
@property (__weak,readonly) NKIssue * issue;                  //@synthesize issue=_issue - In the implementation block
@property (copy) NSDictionary * userInfo; 
+(BOOL)supportsSecureCoding;
-(id)_connection;
-(void)setUserInfoData:(NSData *)arg1 ;
-(NSDictionary *)userInfo;
-(id)init;
-(void)_cancel;
-(NKIssue *)issue;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(NSString *)identifier;
-(id)description;
-(NSData *)userInfoData;
-(void)setURLRequest:(NSURLRequest *)arg1 ;
-(NSURLRequest *)URLRequest;
-(void)setConnection:(NSURLConnection *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURLConnection *)connection;
-(void)dealloc;
-(BOOL)_attemptedConnection;
-(BOOL)_isDecodingValid;
-(void)_issueWasRemovedFromLibrary;
-(void)_setIssue:(id)arg1 ;
-(id)_initWithURLRequest:(id)arg1 issue:(id)arg2 ;
-(void)setIssue:(NKIssue *)arg1 ;
-(BOOL)attemptedConnection;
-(void)_connectionBackgroundDownloadPreCompleted:(id)arg1 ;
-(void)_connectionBackgroundDownloadPostCompleted:(id)arg1 ;
-(void)setAttemptedConnection:(BOOL)arg1 ;
-(id)downloadWithDelegate:(id)arg1 ;
@end

