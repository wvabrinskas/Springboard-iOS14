/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:21 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/FlightUtilities.framework/FlightUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>

@class FUFlightInfoView;

@interface FUFlightInfoViewController : UIViewController {

	FUFlightInfoView* _flight;
	unsigned long long _style;

}
-(id)initWithStyle:(unsigned long long)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)loadView;
-(void)setStyle:(unsigned long long)arg1 ;
-(id)flightInfoView;
@end

