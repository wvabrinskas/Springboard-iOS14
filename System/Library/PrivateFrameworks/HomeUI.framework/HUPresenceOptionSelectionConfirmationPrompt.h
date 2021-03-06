/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface HUPresenceOptionSelectionConfirmationPrompt : NSObject {

	BOOL _resetLocationToHomeOnConfirmation;
	NSString* _alertTitle;
	NSString* _alertBody;

}

@property (nonatomic,copy,readonly) NSString * alertTitle;                          //@synthesize alertTitle=_alertTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * alertBody;                           //@synthesize alertBody=_alertBody - In the implementation block
@property (nonatomic,readonly) BOOL resetLocationToHomeOnConfirmation;              //@synthesize resetLocationToHomeOnConfirmation=_resetLocationToHomeOnConfirmation - In the implementation block
-(id)init;
-(NSString *)alertBody;
-(NSString *)alertTitle;
-(id)initWithAlertTitle:(id)arg1 alertBody:(id)arg2 resetLocationToHomeOnConfirmation:(BOOL)arg3 ;
-(BOOL)resetLocationToHomeOnConfirmation;
@end

