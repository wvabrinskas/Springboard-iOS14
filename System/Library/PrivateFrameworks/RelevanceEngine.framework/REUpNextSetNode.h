/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray;

@interface REUpNextSetNode : NSObject {

	id _item;
	REUpNextSetNode* _parent;
	NSMutableArray* _children;
	unsigned long long _rank;

}

@property (nonatomic,readonly) id item;                              //@synthesize item=_item - In the implementation block
@property (nonatomic,retain) REUpNextSetNode * parent;               //@synthesize parent=_parent - In the implementation block
@property (nonatomic,retain) NSMutableArray * children;              //@synthesize children=_children - In the implementation block
@property (assign,nonatomic) unsigned long long rank;                //@synthesize rank=_rank - In the implementation block
-(NSMutableArray *)children;
-(unsigned long long)rank;
-(void)remove;
-(void)setParent:(REUpNextSetNode *)arg1 ;
-(REUpNextSetNode *)parent;
-(id)initWithItem:(id)arg1 ;
-(id)item;
-(void)join:(id)arg1 ;
-(void)setChildren:(NSMutableArray *)arg1 ;
-(void)setRank:(unsigned long long)arg1 ;
-(id)rootNode;
@end

