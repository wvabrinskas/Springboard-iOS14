/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:59 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppSSO.framework/AppSSO
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSHTTPURLResponse, NSData;

@interface SOAuthorizationCredential : NSObject <NSSecureCoding> {

	NSDictionary* _httpAuthorizationHeaders;
	NSHTTPURLResponse* _httpResponse;
	NSData* _httpBody;

}

@property (nonatomic,retain) NSDictionary * httpAuthorizationHeaders;              //@synthesize httpAuthorizationHeaders=_httpAuthorizationHeaders - In the implementation block
@property (nonatomic,copy) NSHTTPURLResponse * httpResponse;                       //@synthesize httpResponse=_httpResponse - In the implementation block
@property (nonatomic,retain) NSData * httpBody;                                    //@synthesize httpBody=_httpBody - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSHTTPURLResponse *)httpResponse;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setHttpAuthorizationHeaders:(NSDictionary *)arg1 ;
-(NSDictionary *)httpAuthorizationHeaders;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)httpBody;
-(void)setHttpBody:(NSData *)arg1 ;
-(void)setHttpResponse:(NSHTTPURLResponse *)arg1 ;
@end
