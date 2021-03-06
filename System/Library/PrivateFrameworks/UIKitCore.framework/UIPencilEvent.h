/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIEvent.h>

@class NSHashTable;

@interface UIPencilEvent : UIEvent {

	NSHashTable* _trackedInteractions;

}

@property (nonatomic,retain) NSHashTable * trackedInteractions;              //@synthesize trackedInteractions=_trackedInteractions - In the implementation block
-(long long)subtype;
-(void)deregisterAllInteractionsForWindow:(id)arg1 ;
-(void)registerInteraction:(id)arg1 ;
-(NSHashTable *)trackedInteractions;
-(long long)type;
-(id)_init;
-(void)setTrackedInteractions:(NSHashTable *)arg1 ;
-(id)collectAllActiveInteractions;
-(void)_sendEventToInteractions;
-(void)deregisterInteraction:(id)arg1 ;
@end

