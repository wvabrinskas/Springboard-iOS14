/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAML/SAMLBaseElement.h>

@class NSString, NSDate, SAMLSignature, SAMLSubject, NSArray, SAMLEvidence;

@interface SAMLAuthZDecisionQueryElement : SAMLBaseElement

@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,retain) NSString * destination; 
@property (nonatomic,readonly) NSDate * issueInstant; 
@property (nonatomic,readonly) NSString * consent; 
@property (nonatomic,retain) NSString * resource; 
@property (nonatomic,retain) NSString * channelId; 
@property (nonatomic,readonly) SAMLSignature * signature; 
@property (nonatomic,retain) SAMLSubject * subject; 
@property (nonatomic,readonly) NSArray * actions; 
@property (nonatomic,retain) SAMLEvidence * evidence; 
+(id)createElement:(id*)arg1 ;
-(SAMLSignature *)signature;
-(SAMLSubject *)subject;
-(void)setSubject:(SAMLSubject *)arg1 ;
-(NSString *)destination;
-(NSString *)identifier;
-(void)addAction:(id)arg1 ;
-(void)setResource:(NSString *)arg1 ;
-(void)setChannelId:(NSString *)arg1 ;
-(NSString *)consent;
-(NSString *)resource;
-(void)setDestination:(NSString *)arg1 ;
-(NSString *)channelId;
-(NSArray *)actions;
-(NSDate *)issueInstant;
-(SAMLEvidence *)evidence;
-(void)setEvidence:(SAMLEvidence *)arg1 ;
@end

