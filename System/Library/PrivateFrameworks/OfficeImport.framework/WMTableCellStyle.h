/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:54 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OfficeImport/WMStyle.h>

@interface WMTableCellStyle : WMStyle {

	double mLeftPadding;
	double mRightPadding;

}
+(id)dominantColorOf:(id)arg1 ;
+(id)resolveStyleColorWithPercentage:(float)arg1 shading:(id)arg2 ;
+(id)resolveStyleColorWithPercentage:(float)arg1 foregroundColor:(id)arg2 backgroundColor:(id)arg3 ;
+(float)resolveColorValueWithPercentage:(float)arg1 foregroundComponent:(float)arg2 backgroundComponent:(float)arg3 ;
-(double)leftPadding;
-(double)rightPadding;
-(void)addTableCellStyleProperties:(id)arg1 ;
-(void)addTableCellProperties:(id)arg1 ;
-(id)initWithTableCellProperties:(id)arg1 ;
@end

