/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:35 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CSExternalEventHandling.h>

@class CSCoverSheetViewController, NSString;

@interface SBDashBoardAnalyticsEmitter : NSObject <CSExternalEventHandling> {

	CSCoverSheetViewController* _coverSheetViewController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * coverSheetIdentifier; 
@property (nonatomic,readonly) long long participantState; 
-(NSString *)coverSheetIdentifier;
-(BOOL)wouldHandleButtonEvent:(id)arg1 ;
-(BOOL)handleEvent:(id)arg1 ;
-(id)initWithCoverSheetViewController:(id)arg1 ;
-(void)conformsToCSEventHandling;
-(long long)participantState;
-(void)dealloc;
@end

