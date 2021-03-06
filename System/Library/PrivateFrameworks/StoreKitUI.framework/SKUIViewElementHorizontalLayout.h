/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:05 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface SKUIViewElementHorizontalLayout : NSObject {

	double _elementSpacing;
	double _layoutWidth;
	long long _maximumElementsPerLine;
	long long _maximumLines;

}

@property (assign,nonatomic) double elementSpacing;                         //@synthesize elementSpacing=_elementSpacing - In the implementation block
@property (assign,nonatomic) double layoutWidth;                            //@synthesize layoutWidth=_layoutWidth - In the implementation block
@property (assign,nonatomic) long long maximumElementsPerLine;              //@synthesize maximumElementsPerLine=_maximumElementsPerLine - In the implementation block
@property (assign,nonatomic) long long maximumLines;                        //@synthesize maximumLines=_maximumLines - In the implementation block
-(long long)maximumLines;
-(void)setMaximumLines:(long long)arg1 ;
-(double)layoutWidth;
-(void)setElementSpacing:(double)arg1 ;
-(void)setLayoutWidth:(double)arg1 ;
-(id)layoutViewElements:(id)arg1 usingSizingBlock:(/*^block*/id)arg2 ;
-(double)elementSpacing;
-(void)setMaximumElementsPerLine:(long long)arg1 ;
-(long long)maximumElementsPerLine;
@end

