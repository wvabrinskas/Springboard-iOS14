/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:15 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSManagedObject.h>
#import <libobjc.A.dylib/ICSearchIndexableNote.h>

@class NSSet, NSString, NSNumber, NSDate, NoteBodyObject, NoteStoreObject, NSURL, NSData;

@interface NoteObject : NSManagedObject <ICSearchIndexableNote>

@property (nonatomic,readonly) BOOL isModernNote; 
@property (nonatomic,readonly) NSSet * noteCellKeyPaths; 
@property (nonatomic,readonly) BOOL hasUnreadChanges; 
@property (nonatomic,readonly) BOOL isDeletedOrInTrash; 
@property (nonatomic,readonly) BOOL isPinned; 
@property (nonatomic,readonly) long long currentStatus; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSNumber * externalFlags; 
@property (nonatomic,retain) NSNumber * externalServerIntId; 
@property (nonatomic,retain) NSNumber * deletedFlag; 
@property (nonatomic,retain) NSNumber * externalSequenceNumber; 
@property (nonatomic,retain) NSString * summary; 
@property (nonatomic,retain) NSString * author; 
@property (nonatomic,retain) NSDate * modificationDate; 
@property (nonatomic,retain) NSDate * creationDate; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSNumber * contentType; 
@property (nonatomic,retain) NSNumber * containsCJK; 
@property (nonatomic,retain) NoteBodyObject * body; 
@property (nonatomic,retain) NSSet * attachments; 
@property (nonatomic,retain) NoteStoreObject * store; 
@property (nonatomic,retain) NSNumber * integerId; 
@property (nonatomic,retain) NSString * content; 
@property (nonatomic,readonly) NSString * contentAsPlainText; 
@property (nonatomic,readonly) NSString * contentAsPlainTextPreservingNewlines; 
@property (assign,nonatomic) BOOL isPlainText; 
@property (nonatomic,readonly) NSURL * noteId; 
@property (nonatomic,readonly) BOOL isMarkedForDeletion; 
@property (nonatomic,readonly) BOOL isBeingMarkedForDeletion; 
@property (nonatomic,retain) NSNumber * isBookkeepingEntry; 
@property (nonatomic,retain) NSString * serverId; 
@property (nonatomic,readonly) BOOL hasValidServerIntId; 
@property (assign,nonatomic) long long serverIntId; 
@property (nonatomic,retain,readonly) NSString * guid; 
@property (assign,nonatomic) unsigned long long flags; 
@property (nonatomic,retain) NSData * externalRepresentation; 
@property (nonatomic,retain) NSString * externalContentRef; 
@property (assign,nonatomic) unsigned long long sequenceNumber; 
-(id)accountName;
-(BOOL)isPinned;
-(NSURL *)noteId;
-(unsigned long long)flags;
-(id)contentIdentifier;
-(id)identifier;
-(long long)currentStatus;
-(void)setContent:(NSString *)arg1 ;
-(BOOL)isDeletable;
-(void)setFlags:(unsigned long long)arg1 ;
-(void)setSequenceNumber:(unsigned long long)arg1 ;
-(id)folderName;
-(id)dataSourceIdentifier;
-(NSString *)contentAsPlainText;
-(BOOL)containsAttachments;
-(NSString *)contentAsPlainTextPreservingNewlines;
-(void)markForDeletion;
-(BOOL)isMarkedForDeletion;
-(void)setIsPlainText:(BOOL)arg1 ;
-(long long)serverIntId;
-(BOOL)isMovable;
-(id)noteAsPlainTextWithoutTitle;
-(id)userActivityContentAttributeSet;
-(BOOL)isPasswordProtected;
-(BOOL)isModernNote;
-(BOOL)isSharedViaICloud;
-(BOOL)isSharedViaICloudFolder;
-(BOOL)isSharedReadOnly;
-(id)trimmedTitle;
-(id)folderNameForNoteList;
-(long long)visibilityTestingType;
-(unsigned long long)searchResultsSection;
-(BOOL)searchResultCanBeDeletedFromNoteContext;
-(BOOL)isHiddenFromSearch;
-(id)authorsExcludingCurrentUser;
-(NSSet *)noteCellKeyPaths;
-(id)contentInfoText;
-(id)searchIndexingIdentifier;
-(unsigned long long)sequenceNumber;
-(BOOL)hasUnreadChanges;
-(BOOL)isDeletedOrInTrash;
-(id)searchableItemAttributeSet;
-(id)dataForTypeIdentifier:(id)arg1 ;
-(BOOL)isPlainText;
-(NSData *)externalRepresentation;
-(id)defaultTitleForEmptyNote;
-(NSString *)externalContentRef;
-(void)setExternalContentRef:(NSString *)arg1 ;
-(BOOL)isBeingMarkedForDeletion;
-(void)setServerIntId:(long long)arg1 ;
-(BOOL)hasValidServerIntId;
-(BOOL)belongsToCollection:(id)arg1 ;
-(id)searchDomainIdentifier;
-(void)setExternalRepresentation:(NSData *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(unsigned long long)searchResultType;
-(NSString *)content;
@end

