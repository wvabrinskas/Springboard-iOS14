/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:22 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HIDDisplay.framework/HIDDisplay
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HIDDisplay/HIDDisplayInterface.h>

@class NSDictionary;

@interface HIDDisplayUserAdjustmentInterface : HIDDisplayInterface {

	NSDictionary* _usageElementMap;

}

@property (readonly) BOOL valid; 
-(BOOL)valid;
-(id)get:(id*)arg1 ;
-(id)initWithService:(unsigned)arg1 ;
-(id)initWithContainerID:(id)arg1 ;
-(BOOL)invalidate:(id*)arg1 ;
-(id)getHIDDevices;
-(BOOL)setupInterface;
-(BOOL)set:(id)arg1 error:(id*)arg2 ;
@end
