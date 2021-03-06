/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:28 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Foundation/Foundation-Structs.h>
@interface _NSObserverList : NSObject {

	id _owner;
	id _observers;
	AI _observerCount;
	os_unfair_lock_s _observersLock;

}
-(id)init;
-(id)debugDescription;
-(id)description;
-(void)removeObservation:(id)arg1 ;
-(void)finishObserving;
-(void)_receiveBox:(id)arg1 ;
-(void)dealloc;
@end

