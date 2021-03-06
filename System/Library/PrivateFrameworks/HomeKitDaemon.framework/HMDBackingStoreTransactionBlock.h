/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:25 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class HMDBackingStoreTransactionOptions, HMDBackingStore, NSMutableArray, NSString;

@interface HMDBackingStoreTransactionBlock : HMFObject <HMFLogging> {

	BOOL _committed;
	HMDBackingStoreTransactionOptions* _options;
	HMDBackingStore* _backingStore;
	NSMutableArray* _objects;

}

@property (assign,nonatomic,__weak) HMDBackingStore * backingStore;                      //@synthesize backingStore=_backingStore - In the implementation block
@property (nonatomic,retain) NSMutableArray * objects;                                   //@synthesize objects=_objects - In the implementation block
@property (assign,nonatomic) BOOL committed;                                             //@synthesize committed=_committed - In the implementation block
@property (nonatomic,readonly) HMDBackingStoreTransactionOptions * options;              //@synthesize options=_options - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(void)sort:(id)arg1 ;
-(void)run:(/*^block*/id)arg1 ;
-(void)add:(id)arg1 ;
-(void)save:(/*^block*/id)arg1 ;
-(HMDBackingStore *)backingStore;
-(void)addObjects:(id)arg1 ;
-(void)setCommitted:(BOOL)arg1 ;
-(NSMutableArray *)objects;
-(void)run;
-(HMDBackingStoreTransactionOptions *)options;
-(NSString *)description;
-(void)save;
-(BOOL)committed;
-(void)setBackingStore:(HMDBackingStore *)arg1 ;
-(id)debugString:(BOOL)arg1 ;
-(id)logIdentifier;
-(void)setObjects:(NSMutableArray *)arg1 ;
-(void)dumpDebug:(id)arg1 ;
-(void)dumpDebug;
-(void)add:(id)arg1 withMessage:(id)arg2 ;
-(id)initWithBackingStore:(id)arg1 options:(id)arg2 label:(id)arg3 ;
-(void)runWithoutSave:(/*^block*/id)arg1 ;
@end

