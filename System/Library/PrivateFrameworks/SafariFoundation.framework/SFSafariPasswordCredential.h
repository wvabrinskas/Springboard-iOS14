/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SafariFoundation.framework/SafariFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, NSDate;


@protocol SFSafariPasswordCredential <NSCopying,NSObject,NSSecureCoding>
@property (nonatomic,copy,readonly) NSString * user; 
@property (nonatomic,copy,readonly) NSString * site; 
@property (nonatomic,copy,readonly) NSString * password; 
@property (nonatomic,readonly) NSDate * creationDate; 
@property (getter=isExternal,nonatomic,readonly) BOOL external; 
@required
-(NSString *)user;
-(NSString *)password;
-(NSString *)site;
-(BOOL)isExternal;
-(NSDate *)creationDate;

@end

