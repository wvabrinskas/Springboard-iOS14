/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/TMLValue.h>

@class NSString;

@interface TMLReference : NSObject <TMLValue> {

	id _target;
	/*^block*/id _block;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)referenceForTarget:(id)arg1 ;
+(id)referenceWithBlock:(/*^block*/id)arg1 ;
-(unsigned long long)valueType;
-(NSString *)description;
-(id)initWithTarget:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)value;
@end

