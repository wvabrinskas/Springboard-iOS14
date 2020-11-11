/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class UIColor, UIFont;

@interface StocksStyle : NSObject {

	UIColor* _chartHighlightColor;
	UIFont* _mainFont;
	UIFont* _chartLabelFont;

}
+(id)sharedStyle;
-(id)init;
-(id)fontOfSize:(double)arg1 ;
-(void)resetLocale;
-(id)lightFontOfSize:(double)arg1 ;
-(id)lossColor;
-(id)gainColor;
-(id)chartHighlightColor;
-(id)boldFontOfSize:(double)arg1 ;
-(id)mediumFontOfSize:(double)arg1 ;
@end
