/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:45 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Stocks/Stocks-Structs.h>
#import <UIKitCore/UIView.h>

@class NSArray;

@interface LabelSequenceView : UIView {

	NSArray* _stringDrawingInfoValues;

}

@property (nonatomic,retain) NSArray * stringDrawingInfoValues;              //@synthesize stringDrawingInfoValues=_stringDrawingInfoValues - In the implementation block
-(id)init;
-(void)drawRect:(CGRect)arg1 ;
-(CGSize)requiredSize;
-(NSArray *)stringDrawingInfoValues;
-(void)setStringDrawingInfoValues:(NSArray *)arg1 ;
@end
