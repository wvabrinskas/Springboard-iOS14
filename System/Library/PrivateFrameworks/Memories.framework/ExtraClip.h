/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:41 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Memories/KonaClip.h>

@class NSMutableDictionary, NSString;

@interface ExtraClip : KonaClip

@property (nonatomic,retain,readonly) NSMutableDictionary * extraDefinition; 
@property (nonatomic,retain) NSString * name; 
@property (nonatomic,retain) NSString * text; 
@property (assign,nonatomic) double startRatio; 
@property (assign,nonatomic) double endRatio; 
-(void)setText:(NSString *)arg1 ;
-(NSString *)text;
-(NSString *)name;
-(int)maxDuration;
-(void)setName:(NSString *)arg1 ;
-(BOOL)hasVisualCharacteristic;
-(int)clipType;
-(NSMutableDictionary *)extraDefinition;
-(double)startRatio;
-(void)setStartRatio:(double)arg1 ;
-(double)endRatio;
-(void)setEndRatio:(double)arg1 ;
@end

