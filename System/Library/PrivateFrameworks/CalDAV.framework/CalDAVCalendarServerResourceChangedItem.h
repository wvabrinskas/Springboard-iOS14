/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:02 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet, ICSDateValue;

@interface CalDAVCalendarServerResourceChangedItem : CoreDAVItem {

	NSMutableSet* _created;
	NSMutableSet* _updated;
	NSMutableSet* _deleted;
	NSMutableSet* _collectionChanges;
	NSMutableSet* _collectionUpdates;
	ICSDateValue* _dtstamp;

}

@property (nonatomic,retain) NSMutableSet * created;                        //@synthesize created=_created - In the implementation block
@property (nonatomic,retain) NSMutableSet * updated;                        //@synthesize updated=_updated - In the implementation block
@property (nonatomic,retain) NSMutableSet * deleted;                        //@synthesize deleted=_deleted - In the implementation block
@property (nonatomic,retain) NSMutableSet * collectionChanges;              //@synthesize collectionChanges=_collectionChanges - In the implementation block
@property (nonatomic,retain) NSMutableSet * collectionUpdates;              //@synthesize collectionUpdates=_collectionUpdates - In the implementation block
@property (nonatomic,retain) ICSDateValue * dtstamp;                        //@synthesize dtstamp=_dtstamp - In the implementation block
-(id)init;
-(ICSDateValue *)dtstamp;
-(NSMutableSet *)created;
-(NSMutableSet *)deleted;
-(NSMutableSet *)updated;
-(void)setDeleted:(NSMutableSet *)arg1 ;
-(NSMutableSet *)collectionChanges;
-(NSMutableSet *)collectionUpdates;
-(void)setCreated:(NSMutableSet *)arg1 ;
-(void)setUpdated:(NSMutableSet *)arg1 ;
-(void)setDtstamp:(ICSDateValue *)arg1 ;
-(id)copyParseRules;
-(void)setCollectionChanges:(NSMutableSet *)arg1 ;
-(void)setCollectionUpdates:(NSMutableSet *)arg1 ;
-(void)addCreated:(id)arg1 ;
-(void)addUpdated:(id)arg1 ;
-(void)addDeleted:(id)arg1 ;
-(void)addCollectionChanges:(id)arg1 ;
-(void)addCollectionUpdates:(id)arg1 ;
-(void)setDtstampItem:(id)arg1 ;
@end
