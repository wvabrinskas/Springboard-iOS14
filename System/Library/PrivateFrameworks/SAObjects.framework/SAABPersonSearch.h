/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:09 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SADomainCommand.h>

@class NSURL, SALocation, NSDate, NSString, SAEmail, NSNumber, SAPhone;

@interface SAABPersonSearch : SADomainCommand

@property (nonatomic,copy) NSURL * accountIdentifier; 
@property (nonatomic,retain) SALocation * address; 
@property (nonatomic,copy) NSDate * birthday; 
@property (nonatomic,copy) NSString * company; 
@property (nonatomic,retain) SAEmail * email; 
@property (nonatomic,copy) NSNumber * me; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,retain) SAPhone * phone; 
@property (nonatomic,copy) NSString * relationship; 
@property (nonatomic,copy) NSString * scope; 
+(id)personSearch;
+(id)personSearchWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setMe:(NSNumber *)arg1 ;
-(NSNumber *)me;
-(void)setEmail:(SAEmail *)arg1 ;
-(NSURL *)accountIdentifier;
-(id)groupIdentifier;
-(SALocation *)address;
-(NSString *)relationship;
-(void)setAddress:(SALocation *)arg1 ;
-(void)setAccountIdentifier:(NSURL *)arg1 ;
-(SAPhone *)phone;
-(void)setScope:(NSString *)arg1 ;
-(SAEmail *)email;
-(void)setBirthday:(NSDate *)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(void)setPhone:(SAPhone *)arg1 ;
-(NSString *)company;
-(NSString *)name;
-(NSString *)scope;
-(NSDate *)birthday;
-(void)setCompany:(NSString *)arg1 ;
-(void)setRelationship:(NSString *)arg1 ;
-(BOOL)mutatingCommand;
-(void)setName:(NSString *)arg1 ;
@end

