/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SCKZoneStore;
@class SCKZoneSchema, NSArray, SCKZoneDiff;

@interface SCKZone : NSObject {

	SCKZoneSchema* _schema;
	id<SCKZoneStore> _store;

}

@property (nonatomic,retain) id<SCKZoneStore> store;                       //@synthesize store=_store - In the implementation block
@property (nonatomic,readonly) SCKZoneSchema * schema;                     //@synthesize schema=_schema - In the implementation block
@property (nonatomic,copy,readonly) NSArray * clientRecords; 
@property (nonatomic,copy,readonly) SCKZoneDiff * clientDiff; 
@property (nonatomic,readonly) BOOL needsFirstSync; 
@property (getter=isDirty,nonatomic,readonly) BOOL dirty; 
-(SCKZoneSchema *)schema;
-(id)initWithSchema:(id)arg1 store:(id)arg2 ;
-(BOOL)isDirty;
-(BOOL)needsFirstSync;
-(id<SCKZoneStore>)store;
-(NSArray *)clientRecords;
-(void)setStore:(id<SCKZoneStore>)arg1 ;
-(SCKZoneDiff *)clientDiff;
@end

