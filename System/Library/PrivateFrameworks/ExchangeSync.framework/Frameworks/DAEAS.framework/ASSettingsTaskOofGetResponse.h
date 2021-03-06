/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:17 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DAEAS/ASItem.h>

@class NSNumber, NSString, NSArray, NSMutableArray;

@interface ASSettingsTaskOofGetResponse : ASItem {

	NSNumber* _oofState;
	NSString* _startTime;
	NSString* _endTime;
	NSArray* _oofMessages;
	NSMutableArray* _mOofMessages;

}

@property (nonatomic,retain) NSMutableArray * mOofMessages;              //@synthesize mOofMessages=_mOofMessages - In the implementation block
@property (nonatomic,retain) NSNumber * oofState;                        //@synthesize oofState=_oofState - In the implementation block
@property (nonatomic,retain) NSString * startTime;                       //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,retain) NSString * endTime;                         //@synthesize endTime=_endTime - In the implementation block
@property (nonatomic,retain) NSArray * oofMessages;                      //@synthesize oofMessages=_oofMessages - In the implementation block
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
-(NSString *)endTime;
-(NSString *)startTime;
-(void)setEndTime:(NSString *)arg1 ;
-(void)setStartTime:(NSString *)arg1 ;
-(id)description;
-(NSNumber *)oofState;
-(void)setOofState:(NSNumber *)arg1 ;
-(void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6 ;
-(NSMutableArray *)mOofMessages;
-(void)setMOofMessages:(NSMutableArray *)arg1 ;
-(void)addOofMessages:(id)arg1 ;
-(NSArray *)oofMessages;
-(id)convertToDAOofParams;
-(void)setOofMessages:(NSArray *)arg1 ;
@end

