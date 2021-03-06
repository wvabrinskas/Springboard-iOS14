/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:21 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class SSDoubleLinkedListNode, NSString, NSArray;

@interface SSDoubleLinkedList : NSObject {

	unsigned long long _count;
	SSDoubleLinkedListNode* _head;
	SSDoubleLinkedListNode* _tail;
	NSString* _listIdentifier;

}

@property (nonatomic,retain) NSString * listIdentifier;                  //@synthesize listIdentifier=_listIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * allNodes; 
@property (nonatomic,readonly) unsigned long long count;                 //@synthesize count=_count - In the implementation block
@property (nonatomic,retain) SSDoubleLinkedListNode * head;              //@synthesize head=_head - In the implementation block
@property (nonatomic,retain) SSDoubleLinkedListNode * tail;              //@synthesize tail=_tail - In the implementation block
-(SSDoubleLinkedListNode *)tail;
-(void)setTail:(SSDoubleLinkedListNode *)arg1 ;
-(SSDoubleLinkedListNode *)head;
-(void)setHead:(SSDoubleLinkedListNode *)arg1 ;
-(void)appendNode:(id)arg1 ;
-(void)removeNode:(id)arg1 ;
-(id)init;
-(void)removeAllNodes;
-(unsigned long long)count;
-(id)description;
-(id)insertObject:(id)arg1 ;
-(void)insertNode:(id)arg1 ;
-(NSArray *)allNodes;
-(void)setListIdentifier:(NSString *)arg1 ;
-(NSString *)listIdentifier;
-(id)appendObject:(id)arg1 ;
@end

