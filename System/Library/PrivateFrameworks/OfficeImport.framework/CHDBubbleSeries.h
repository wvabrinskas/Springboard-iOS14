/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:02 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OfficeImport/CHDSeries.h>

@class CHDData;

@interface CHDBubbleSeries : CHDSeries {

	CHDData* mSizeData;
	BOOL mBubble3D;
	BOOL mInvertIfNegative;
	BOOL mShowBubbleSize;

}
-(BOOL)isShowBubbleSize;
-(void)setShowBubbleSize:(BOOL)arg1 ;
-(void)setCategoryData:(id)arg1 ;
-(BOOL)isBubble3D;
-(id)sizeData;
-(void)setSizeData:(id)arg1 ;
-(void)setBubble3D:(BOOL)arg1 ;
-(BOOL)isInvertIfNegative;
-(void)setInvertIfNegative:(BOOL)arg1 ;
@end
