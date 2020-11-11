/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:16 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <HealthDaemon/HealthDaemon-Structs.h>
@class NSArray;

@interface _HDCachedSourceOrder : NSObject {

	BOOL _userOrdered;
	BOOL _isDefaultSourceOrder;
	vector<_HDWrappedSource, std::__1::allocator<_HDWrappedSource> >* _orderedSources;
	unordered_map<long long, HKSource *, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<std::__1::pair<const long long, HKSource *> > >* _sourcesByID;

}

@property (assign,nonatomic) vector<_HDWrappedSource orderedSources;              //@synthesize orderedSources=_orderedSources - In the implementation block
@property (assign,nonatomic) unordered_map<long long sourcesByID;                 //@synthesize sourcesByID=_sourcesByID - In the implementation block
@property (nonatomic,readonly) BOOL userOrdered;                                  //@synthesize userOrdered=_userOrdered - In the implementation block
@property (nonatomic,readonly) BOOL isDefaultSourceOrder;                         //@synthesize isDefaultSourceOrder=_isDefaultSourceOrder - In the implementation block
@property (nonatomic,copy,readonly) NSArray * sources; 
@property (nonatomic,copy,readonly) NSArray * sourceIDs; 
-(id)init;
-(NSArray *)sources;
-(BOOL)userOrdered;
-(NSArray *)sourceIDs;
-(unordered_map<long long)sourcesByID;
-(id)description;
-(void)setOrderedSources:(vector<_HDWrappedSource)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setSourcesByID:(unordered_map<long long)arg1 ;
-(BOOL)isDefaultSourceOrder;
-(id)initWithSources:(vector<_HDWrappedSource, std::__1::allocator<_HDWrappedSource> >*)arg1 userOrdered:(BOOL)arg2 isDefaultOrder:(BOOL)arg3 ;
-(vector<_HDWrappedSource)orderedSources;
@end
