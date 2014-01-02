//
//  BlogPost.m
///  BlogReader
//
//  Created by Stephen Punwasi on 01/01/2014.
//  Copyright (c) 2014 Stephen Punwasi. All rights reserved.
//

#import "BlogPost.h"

@implementation BlogPost
- (id) initWithTitle:(NSString *)title {
    self = [super init];
    
    if (self){
        self.title = title;
        self.author = nil;
        self.thumbnail = nil;
    }
    return self;
}

+ (id) blogPostWithTitle:(NSString *)title{
    return [[self alloc] initWithTitle:title];
}

- (NSURL *) thumbnailURL{
    return [NSURL URLWithString:self.thumbnail];
}

- (NSString *) formattedDate {
    NSDateFormatter *dateFormatter = [[NSDateFormatter alloc] init];
    [dateFormatter setDateFormat:@"yyyy-MM-dd HH:mm:ss"]; //The way we expect the date in JSON
    NSDate *tempDate = [dateFormatter dateFromString:self.date];
    [dateFormatter setDateFormat:@"EE MMM dd"]; //Change The Output Date Here
    return [dateFormatter stringFromDate:tempDate];
}

@end
