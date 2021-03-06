/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <UIKitCore/UIKitCore-Structs.h>
@class NSAttributedString;

@interface _UILabelScaledMetrics : NSObject {

	double _actualScaleFactor;
	double _baselineOffset;
	double _scaledBaselineOffset;
	double _scaledLineHeight;
	long long _measuredNumberOfLines;
	NSAttributedString* _scaledAttributedText;
	double _unscaledFirstBaselineOffset;
	CGSize _targetSize;
	CGSize _scaledSize;
	CGSize _unscaledAndPossiblyTooLargeSize;

}

@property (assign,nonatomic) CGSize targetSize;                                      //@synthesize targetSize=_targetSize - In the implementation block
@property (assign,nonatomic) CGSize scaledSize;                                      //@synthesize scaledSize=_scaledSize - In the implementation block
@property (assign,nonatomic) double actualScaleFactor;                               //@synthesize actualScaleFactor=_actualScaleFactor - In the implementation block
@property (assign,nonatomic) double baselineOffset;                                  //@synthesize baselineOffset=_baselineOffset - In the implementation block
@property (assign,nonatomic) double scaledBaselineOffset;                            //@synthesize scaledBaselineOffset=_scaledBaselineOffset - In the implementation block
@property (assign,nonatomic) double scaledLineHeight;                                //@synthesize scaledLineHeight=_scaledLineHeight - In the implementation block
@property (assign,nonatomic) long long measuredNumberOfLines;                        //@synthesize measuredNumberOfLines=_measuredNumberOfLines - In the implementation block
@property (nonatomic,retain) NSAttributedString * scaledAttributedText;              //@synthesize scaledAttributedText=_scaledAttributedText - In the implementation block
@property (assign,nonatomic) CGSize unscaledAndPossiblyTooLargeSize;                 //@synthesize unscaledAndPossiblyTooLargeSize=_unscaledAndPossiblyTooLargeSize - In the implementation block
@property (assign,nonatomic) double unscaledFirstBaselineOffset;                     //@synthesize unscaledFirstBaselineOffset=_unscaledFirstBaselineOffset - In the implementation block
-(CGSize)targetSize;
-(void)setTargetSize:(CGSize)arg1 ;
-(void)setBaselineOffset:(double)arg1 ;
-(void)setScaledLineHeight:(double)arg1 ;
-(double)scaledBaselineOffset;
-(void)setScaledAttributedText:(NSAttributedString *)arg1 ;
-(double)scaledLineHeight;
-(CGSize)unscaledAndPossiblyTooLargeSize;
-(double)baselineOffset;
-(void)setActualScaleFactor:(double)arg1 ;
-(void)setScaledBaselineOffset:(double)arg1 ;
-(void)setScaledSize:(CGSize)arg1 ;
-(NSAttributedString *)scaledAttributedText;
-(void)setUnscaledAndPossiblyTooLargeSize:(CGSize)arg1 ;
-(double)unscaledFirstBaselineOffset;
-(CGSize)scaledSize;
-(void)setUnscaledFirstBaselineOffset:(double)arg1 ;
-(void)setMeasuredNumberOfLines:(long long)arg1 ;
-(double)actualScaleFactor;
-(long long)measuredNumberOfLines;
@end

