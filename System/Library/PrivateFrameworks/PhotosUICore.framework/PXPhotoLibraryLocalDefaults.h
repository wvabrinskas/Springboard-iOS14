/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:59 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXObservable.h>

@class PHPhotoLibraryAppPrivateData;

@interface PXPhotoLibraryLocalDefaults : PXObservable {

	PHPhotoLibraryAppPrivateData* _appPrivateData;

}
-(void)setDouble:(double)arg1 forKey:(id)arg2 ;
-(void)setBool:(BOOL)arg1 forKey:(id)arg2 ;
-(void)setDictionary:(id)arg1 forKey:(id)arg2 ;
-(void)setData:(id)arg1 forKey:(id)arg2 ;
-(void)setString:(id)arg1 forKey:(id)arg2 ;
-(void)setArray:(id)arg1 forKey:(id)arg2 ;
-(id)dictionaryWithValuesForKeys:(id)arg1 ;
-(id)dataForKey:(id)arg1 ;
-(id)numberForKey:(id)arg1 ;
-(id)initWithPhotoLibrary:(id)arg1 ;
-(id)dictionaryForKey:(id)arg1 ;
-(double)doubleForKey:(id)arg1 ;
-(BOOL)boolForKey:(id)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(void)_notifyObserversDidChangeValueForKey:(id)arg1 ;
-(void)setIdentifiers:(id)arg1 forKey:(id)arg2 ;
-(id)identifiersForKey:(id)arg1 ;
-(void)addIdentifier:(id)arg1 forKey:(id)arg2 ;
-(void)removeIdentifier:(id)arg1 forKey:(id)arg2 ;
-(id)valueForKey:(id)arg1 ;
-(id)stringForKey:(id)arg1 ;
-(void)setNumber:(id)arg1 forKey:(id)arg2 ;
-(id)arrayForKey:(id)arg1 ;
@end

