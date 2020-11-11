/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:23 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CNEnumeratorRefillStrategy.h>

@class CNContactStore;

@interface _CNChangeHistoryGroupRefillStrategy : NSObject <CNEnumeratorRefillStrategy> {

	CNContactStore* _contactStore;

}

@property (nonatomic,readonly) CNContactStore * contactStore;              //@synthesize contactStore=_contactStore - In the implementation block
-(id)objectsRepresentedByBatch:(id)arg1 ;
-(CNContactStore *)contactStore;
-(id)initWithContactStore:(id)arg1 ;
-(id)updateChanges:(id)arg1 withFetchedGroups:(id)arg2 ;
-(id)batchesToRepresentObjects:(id)arg1 suggestedBatchSize:(unsigned long long)arg2 ;
-(id)fetchGroupsWithIdentifiers:(id)arg1 ;
@end
