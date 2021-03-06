/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpeechRecognitionCommandAndControl/CACSimpleContentViewManager.h>
#import <libobjc.A.dylib/CACContextCluesDelegate.h>

@class NSString;

@interface CACContextCluesPresentationManager : CACSimpleContentViewManager <CACContextCluesDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isOverlay;
-(void)showWithCommands:(id)arg1 ;
-(void)contextCludesDidPressDoneButton;
@end

