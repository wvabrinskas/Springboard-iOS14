/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:15 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface AKAuthorizationCredentialStateRequest : NSObject <NSSecureCoding> {

	BOOL _shouldIgnoreUserID;
	BOOL _shouldIgnoreTeamID;
	NSString* _userID;
	NSString* _teamID;
	NSString* _clientID;
	NSString* _altDSID;

}

@property (nonatomic,copy) NSString * teamID;                      //@synthesize teamID=_teamID - In the implementation block
@property (nonatomic,copy) NSString * clientID;                    //@synthesize clientID=_clientID - In the implementation block
@property (nonatomic,copy) NSString * altDSID;                     //@synthesize altDSID=_altDSID - In the implementation block
@property (assign,nonatomic) BOOL shouldIgnoreUserID;              //@synthesize shouldIgnoreUserID=_shouldIgnoreUserID - In the implementation block
@property (assign,nonatomic) BOOL shouldIgnoreTeamID;              //@synthesize shouldIgnoreTeamID=_shouldIgnoreTeamID - In the implementation block
@property (nonatomic,copy) NSString * userID;                      //@synthesize userID=_userID - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)clientID;
-(NSString *)teamID;
-(NSString *)userID;
-(NSString *)altDSID;
-(void)setAltDSID:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTeamID:(NSString *)arg1 ;
-(void)setClientID:(NSString *)arg1 ;
-(BOOL)shouldIgnoreUserID;
-(void)setShouldIgnoreUserID:(BOOL)arg1 ;
-(BOOL)shouldIgnoreTeamID;
-(void)setShouldIgnoreTeamID:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setUserID:(NSString *)arg1 ;
@end

