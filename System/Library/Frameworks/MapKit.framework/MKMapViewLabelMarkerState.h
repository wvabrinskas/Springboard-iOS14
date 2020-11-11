/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:10 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface MKMapViewLabelMarkerState : NSObject {

	BOOL _visible;
	unsigned char _balloonBehavior;

}

@property (assign,getter=isVisible,nonatomic) BOOL visible;              //@synthesize visible=_visible - In the implementation block
@property (assign,nonatomic) unsigned char balloonBehavior;              //@synthesize balloonBehavior=_balloonBehavior - In the implementation block
+(id)stateForLabelMarker:(id)arg1 ;
-(BOOL)isVisible;
-(void)setVisible:(BOOL)arg1 ;
-(void)setBalloonBehavior:(unsigned char)arg1 ;
-(unsigned char)balloonBehavior;
@end
