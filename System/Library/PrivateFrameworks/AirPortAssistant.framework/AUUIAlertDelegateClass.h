/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:31 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/AUUIAlertDelegate.h>

@class AUUIAlert, NSString;

@interface AUUIAlertDelegateClass : NSObject <AUUIAlertDelegate> {

	AUUIAlert* uiAlert;

}

@property (nonatomic,retain) AUUIAlert * uiAlert; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(AUUIAlert *)uiAlert;
-(void)dealloc;
-(void)setUiAlert:(AUUIAlert *)arg1 ;
-(BOOL)auUIAlertOKAction:(id)arg1 ;
-(BOOL)auUIAlertCancelAction:(id)arg1 ;
@end

