/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:25 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HearingUI.framework/HearingUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol HACCContentModuleDelegate <NSObject>
@property (nonatomic,readonly) BOOL shouldDisplayOtherDevice; 
@required
-(void)updateView;
-(double)preferredContentWidth;
-(void)controlDidActivate:(id)arg1;
-(id)currentHearingDevice;
-(void)updateViewForProperties:(id)arg1;
-(void)updateViewForModule:(unsigned long long)arg1;
-(BOOL)shouldDisplayOtherDevice;

@end

