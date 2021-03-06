/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OfficeImport/OADDrawableProperties.h>
#import <libobjc.A.dylib/OADEffectsParent.h>

@class OADTableStyle, NSArray, NSString;

@interface OADTableProperties : OADDrawableProperties <OADEffectsParent> {

	OADTableStyle* mStyle;
	BOOL mRightToLeft;
	BOOL mFirstRow;
	BOOL mFirstColumn;
	BOOL mLastRow;
	BOOL mLastColumn;
	BOOL mBandRow;
	BOOL mBandColumn;
	NSArray* mEffects;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultProperties;
-(BOOL)hasEffects;
-(BOOL)rightToLeft;
-(NSString *)description;
-(id)style;
-(id)initWithDefaults;
-(id)effects;
-(BOOL)lastRow;
-(BOOL)bandRow;
-(void)setStyle:(id)arg1 ;
-(BOOL)firstColumn;
-(void)setEffects:(id)arg1 ;
-(BOOL)lastColumn;
-(BOOL)firstRow;
-(void)setLastColumn:(BOOL)arg1 ;
-(void)setFirstColumn:(BOOL)arg1 ;
-(void)setFirstRow:(BOOL)arg1 ;
-(void)setLastRow:(BOOL)arg1 ;
-(void)setBandColumn:(BOOL)arg1 ;
-(void)setBandRow:(BOOL)arg1 ;
-(void)setRightToLeft:(BOOL)arg1 ;
-(BOOL)bandColumn;
-(BOOL)hasBandsNormalToDir:(int)arg1 ;
-(BOOL)hasVectorNormalToDir:(int)arg1 atExtremePos:(int)arg2 ;
@end

