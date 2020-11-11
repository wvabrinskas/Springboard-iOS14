/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:14 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class UITraitCollection;


@protocol MKUserLocationHeadingIndicator <NSObject>
@property (assign,nonatomic) double minimumAccuracyRadius; 
@property (nonatomic,retain) UITraitCollection * traitCollection; 
@property (assign,nonatomic) unsigned long long mapType; 
@required
-(void)setTraitCollection:(id)arg1;
-(UITraitCollection *)traitCollection;
-(void)updateHeading:(double)arg1;
-(unsigned long long)mapType;
-(void)setMapType:(unsigned long long)arg1;
-(void)setAccuracyRadius:(double)arg1 duration:(double)arg2;
-(void)setMinimumAccuracyRadius:(double)arg1;
-(double)minimumAccuracyRadius;
-(void)updateHeadingAccuracy:(double)arg1 previousAccuracy:(double)arg2;
-(void)updateTintColor:(id)arg1;

@end
