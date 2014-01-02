//
//  BlogPost.h
//  BlogReader
//
//  Created by Stephen Punwasi on 01/01/2014.
//  Copyright (c) 2014 Stephen Punwasi. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BlogPost : NSObject

@property (nonatomic, strong) NSString *title;
@property (nonatomic, strong) NSString *author;
@property (nonatomic, strong) NSString *thumbnail;
@property (nonatomic, strong) NSString *date;
@property (nonatomic, strong) NSURL *url;

// Designated Initializer
- (id) initWithTitle:(NSString *)title;
+ (id) blogPostWithTitle:(NSString *)title;
- (NSURL *) thumbnailURL;
- (NSString *) formattedDate;
@end
