/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:21 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ShareSheet/UIActivity.h>

@class HFAccessoryDiagnosticItem;

@interface HUSendDiagnosticsToManufacturerActivity : UIActivity {

	HFAccessoryDiagnosticItem* _diagnosticItem;

}

@property (nonatomic,retain) HFAccessoryDiagnosticItem * diagnosticItem;              //@synthesize diagnosticItem=_diagnosticItem - In the implementation block
-(id)activityType;
-(id)activityTitle;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(void)prepareWithActivityItems:(id)arg1 ;
-(id)activityImage;
-(id)activityViewController;
-(HFAccessoryDiagnosticItem *)diagnosticItem;
-(id)initWithDiagnosticItem:(id)arg1 ;
-(void)setDiagnosticItem:(HFAccessoryDiagnosticItem *)arg1 ;
@end

