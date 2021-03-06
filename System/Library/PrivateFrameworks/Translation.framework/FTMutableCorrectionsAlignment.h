/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Translation/Translation-Structs.h>
#import <Translation/FTCorrectionsAlignment.h>

@class NSString;

@interface FTMutableCorrectionsAlignment : FTCorrectionsAlignment

@property (nonatomic,copy) NSString * original_words; 
@property (nonatomic,copy) NSString * corrected_words; 
-(id)init;
-(NSString *)original_words;
-(void)setOriginal_words:(NSString *)arg1 ;
-(NSString *)corrected_words;
-(void)setCorrected_words:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

