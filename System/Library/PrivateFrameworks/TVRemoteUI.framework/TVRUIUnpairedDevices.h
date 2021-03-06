/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:53 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVRemoteUI/TVRUIDevice.h>

@class NSString;

@interface TVRUIUnpairedDevices : NSObject <TVRUIDevice>

@property (assign,nonatomic,__weak) id<TVRUIDeviceDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isPaired;
-(void)connect;
-(BOOL)isConnected;
-(id)model;
-(id<TVRUIDeviceDelegate>)delegate;
-(BOOL)isEqualToDevice:(id)arg1 ;
-(id)identifier;
-(BOOL)isConnecting;
-(id)name;
-(void)setDelegate:(id<TVRUIDeviceDelegate>)arg1 ;
-(BOOL)supportsTouchEvents;
-(void)disconnectUserInitiated;
-(void)disconnectSystemInitiated;
-(BOOL)supportsDonatingIntents;
-(BOOL)hasIdentifier:(id)arg1 ;
-(void)disconnectWithTimeOut;
@end

