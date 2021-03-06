/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface MCDependencyReader : NSObject {

	NSObject*<OS_dispatch_queue> _memberQueue;
	NSMutableDictionary* _memberQueueSystemDomainsDict;
	NSMutableDictionary* _memberQueueUserDomainsDict;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> memberQueue;                        //@synthesize memberQueue=_memberQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * memberQueueSystemDomainsDict;              //@synthesize memberQueueSystemDomainsDict=_memberQueueSystemDomainsDict - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * memberQueueUserDomainsDict;                //@synthesize memberQueueUserDomainsDict=_memberQueueUserDomainsDict - In the implementation block
+(id)sharedReader;
+(id)systemStoragePath;
+(id)userStoragePath;
+(void)setSystemStoragePath:(id)arg1 userStoragePath:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)memberQueue;
-(void)invalidateCache;
-(void)setMemberQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)init;
-(id)userDomainsDict;
-(NSMutableDictionary *)memberQueueSystemDomainsDict;
-(NSMutableDictionary *)memberQueueUserDomainsDict;
-(void)memberQueueRereadSystemDomainsDict;
-(void)memberQueueRereadUserDomainsDict;
-(id)memberQueueDependentsOfParent:(id)arg1 inSystemDomain:(id)arg2 ;
-(id)memberQueueDependentsOfParent:(id)arg1 inUserDomain:(id)arg2 ;
-(id)memberQueueParentsInDomain:(id)arg1 ;
-(id)systemDomainsDict;
-(id)memberQueueDependentsOfParent:(id)arg1 inDomain:(id)arg2 ;
-(id)memberQueueParentsInSystemDomain:(id)arg1 ;
-(id)memberQueueParentsInUserDomain:(id)arg1 ;
-(void)setMemberQueueSystemDomainsDict:(NSMutableDictionary *)arg1 ;
-(void)setMemberQueueUserDomainsDict:(NSMutableDictionary *)arg1 ;
-(id)parentsInDomain:(id)arg1 ;
-(id)dependentsOfParent:(id)arg1 inDomain:(id)arg2 ;
-(id)parentsInSystemDomain:(id)arg1 ;
-(id)parentsInUserDomain:(id)arg1 ;
-(id)dependentsOfParent:(id)arg1 inSystemDomain:(id)arg2 ;
-(id)dependentsOfParent:(id)arg1 inUserDomain:(id)arg2 ;
-(void)memberQueueRereadDomainsDict;
-(id)_init;
@end

