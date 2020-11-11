/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:20 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/EFInvocable.h>

@class NSLock, NSMutableArray, NSString;

@interface EFInvocationToken : NSObject <EFInvocable> {

	NSLock* _lock;
	NSMutableArray* _blocks;
	BOOL _isInvoked;
	NSString* _label;

}

@property (getter=isInvoked,readonly) BOOL invoked; 
@property (nonatomic,copy,readonly) NSString * label;               //@synthesize label=_label - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)tokenWithInvocationBlock:(/*^block*/id)arg1 ;
+(id)_descriptionString;
+(id)tokenWithLabel:(id)arg1 invocationBlock:(/*^block*/id)arg2 ;
-(NSString *)label;
-(id)init;
-(void)removeAllInvocationBlocks;
-(BOOL)isInvoked;
-(id)initWithInvocationBlock:(/*^block*/id)arg1 ;
-(void)addInvocable:(id)arg1 ;
-(void)invoke;
-(void)addInvocationBlock:(/*^block*/id)arg1 ;
-(NSString *)description;
-(id)_nts_consumeBlocks;
-(id)initWithLabel:(id)arg1 ;
@end
