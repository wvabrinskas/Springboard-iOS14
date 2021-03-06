/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSSet;


@protocol FCFeedGroupEmitting <FCFeedGroupInsertionDescriptor,NSObject>
@property (nonatomic,copy,readonly) NSSet * emittableGroupTypes; 
@property (nonatomic,readonly) BOOL shouldEmitContentInFavoritesOnlyMode; 
@property (nonatomic,readonly) BOOL emitsSingletonGroups; 
@property (nonatomic,readonly) BOOL emitsSingleRefreshSessionGroups; 
@property (nonatomic,readonly) long long requiredForYouContentTypes; 
@property (nonatomic,readonly) BOOL requiresHeavyweightContent; 
@property (nonatomic,readonly) BOOL isRequiredByFollowingEmitters; 
@optional
+(BOOL)canMergeGroupsUnconditionally;
-(BOOL)requiresHeavyweightContent;
-(BOOL)canDeferEmittingGroupInContext:(id)arg1;
-(BOOL)supportsPagination;
-(BOOL)isRequiredByFollowingEmitters;
-(long long)requiredForYouContentTypes;
-(id)backingChannelTagIDWithConfiguration:(id)arg1;
-(BOOL)canMergeHeadlinesFromGroup:(id)arg1 intoGroup:(id)arg2;
-(BOOL)emitsSingletonGroups;
-(BOOL)emitsSingleRefreshSessionGroups;

@required
+(id)groupEmitterIdentifier;
-(BOOL)shouldEmitContentInFavoritesOnlyMode;
-(NSSet *)emittableGroupTypes;
-(id)operationToEmitGroupWithContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3;
-(BOOL)wantsToEmitGroupInContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3;

@end

