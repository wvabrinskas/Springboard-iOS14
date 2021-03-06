/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface MKTransitSectionPagingFilter : NSObject {

	BOOL _limitNumLines;
	unsigned long long _numLinesFallbackThreshold;
	unsigned long long _numLinesFallbackValue;

}

@property (assign,nonatomic) BOOL limitNumLines;                                        //@synthesize limitNumLines=_limitNumLines - In the implementation block
@property (assign,nonatomic) unsigned long long numLinesFallbackThreshold;              //@synthesize numLinesFallbackThreshold=_numLinesFallbackThreshold - In the implementation block
@property (assign,nonatomic) unsigned long long numLinesFallbackValue;                  //@synthesize numLinesFallbackValue=_numLinesFallbackValue - In the implementation block
+(id)defaultFilterForDepartures;
+(id)defaultFilterForInactiveLines;
-(BOOL)limitNumLines;
-(void)setLimitNumLines:(BOOL)arg1 ;
-(void)setNumLinesFallbackThreshold:(unsigned long long)arg1 ;
-(void)setNumLinesFallbackValue:(unsigned long long)arg1 ;
-(unsigned long long)numLinesFallbackThreshold;
-(unsigned long long)numLinesFallbackValue;
@end

