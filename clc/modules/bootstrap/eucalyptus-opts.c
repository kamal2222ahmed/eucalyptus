/*
  File autogenerated by gengetopt version 2.22.1
  generated with the following command:
  gengetopt --input=arguments.ggo --file-name=eucalyptus-opts --func-name=arguments --arg-struct-name=eucalyptus_opts 

  The developers of gengetopt consider the fixed text that goes in all
  gengetopt output files to be in the public domain:
  we make no copyright claims on it.
*/

/* If we use autoconf.  */
#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "getopt.h"

#include "eucalyptus-opts.h"

const char *eucalyptus_opts_purpose = "";

const char *eucalyptus_opts_usage = "Usage: Eucalyptus [OPTIONS]...";

const char *eucalyptus_opts_description = "";

const char *eucalyptus_opts_help[] = {
  "      --help                 Print help and exit",
  "  -V, --version              Print version and exit",
  "\nEucalyptus Configuration & Environment:",
  "  -u, --user=username        User to drop privs to after starting.  \n                               (default=`eucalyptus')",
  "  -h, --home=directory       Eucalyptus home directory.  (default=`/')",
  "  -D, --define=STRING        Set system properties.",
  "  -v, --verbose              Verbose console output. Note: log file output is \n                               not controlled by this flag.  (default=off)",
  "  -o, --out=filename         Redirect standard out to file.  (default=`&1')",
  "  -e, --err=filename         Redirect standard error to file.  (default=`&2')",
  "\nEucalyptus Runtime Options:",
  "  -C, --check                Check on Eucalyptus.  (default=off)",
  "  -S, --stop                 Stop Eucalyptus.  (default=off)",
  "  -f, --fork                 Fork and daemonize Eucalyptus.  (default=on)",
  "      --pidfile=filename     Location for the pidfile.  \n                               (default=`/var/run/eucalyptus-cloud.pid')",
  "\nJava VM Options:",
  "  -j, --java-home=directory  Alternative way to specify JAVA_HOME.  \n                               (default=`/usr/lib/jvm/java-6-openjdk')",
  "  -J, --jvm-name=jvm-name    Which JVM type to run (see jvm.cfg).  \n                               (default=`-server')",
  "  -X, --jvm-args=STRING      Arguments to pass to the JVM.",
  "  -d, --debug                Launch with debugger enabled.  (default=off)",
  "      --debug-port=INT       Set the port to use for the debugger.  \n                               (default=`5005')",
  "      --debug-suspend        Set the port to use for the debugger.  \n                               (default=off)",
    0
};

typedef enum {ARG_NO
  , ARG_FLAG
  , ARG_STRING
  , ARG_INT
} arguments_arg_type;

static
void clear_given (struct eucalyptus_opts *args_info);
static
void clear_args (struct eucalyptus_opts *args_info);

static int
arguments_internal (int argc, char * const *argv, struct eucalyptus_opts *args_info,
                        struct arguments_params *params, const char *additional_error);

static int
arguments_required2 (struct eucalyptus_opts *args_info, const char *prog_name, const char *additional_error);

static char *
gengetopt_strdup (const char *s);

static
void clear_given (struct eucalyptus_opts *args_info)
{
  args_info->help_given = 0 ;
  args_info->version_given = 0 ;
  args_info->user_given = 0 ;
  args_info->home_given = 0 ;
  args_info->define_given = 0 ;
  args_info->verbose_given = 0 ;
  args_info->out_given = 0 ;
  args_info->err_given = 0 ;
  args_info->check_given = 0 ;
  args_info->stop_given = 0 ;
  args_info->fork_given = 0 ;
  args_info->pidfile_given = 0 ;
  args_info->java_home_given = 0 ;
  args_info->jvm_name_given = 0 ;
  args_info->jvm_args_given = 0 ;
  args_info->debug_given = 0 ;
  args_info->debug_port_given = 0 ;
  args_info->debug_suspend_given = 0 ;
}

static
void clear_args (struct eucalyptus_opts *args_info)
{
  args_info->user_arg = gengetopt_strdup ("eucalyptus");
  args_info->user_orig = NULL;
  args_info->home_arg = gengetopt_strdup ("/");
  args_info->home_orig = NULL;
  args_info->define_arg = NULL;
  args_info->define_orig = NULL;
  args_info->verbose_flag = 0;
  args_info->out_arg = gengetopt_strdup ("&1");
  args_info->out_orig = NULL;
  args_info->err_arg = gengetopt_strdup ("&2");
  args_info->err_orig = NULL;
  args_info->check_flag = 0;
  args_info->stop_flag = 0;
  args_info->fork_flag = 1;
  args_info->pidfile_arg = gengetopt_strdup ("/var/run/eucalyptus-cloud.pid");
  args_info->pidfile_orig = NULL;
  args_info->java_home_arg = gengetopt_strdup ("/usr/lib/jvm/java-6-openjdk");
  args_info->java_home_orig = NULL;
  args_info->jvm_name_arg = gengetopt_strdup ("-server");
  args_info->jvm_name_orig = NULL;
  args_info->jvm_args_arg = NULL;
  args_info->jvm_args_orig = NULL;
  args_info->debug_flag = 0;
  args_info->debug_port_arg = 5005;
  args_info->debug_port_orig = NULL;
  args_info->debug_suspend_flag = 0;
  
}

static
void init_args_info(struct eucalyptus_opts *args_info)
{


  args_info->help_help = eucalyptus_opts_help[0] ;
  args_info->version_help = eucalyptus_opts_help[1] ;
  args_info->user_help = eucalyptus_opts_help[3] ;
  args_info->home_help = eucalyptus_opts_help[4] ;
  args_info->define_help = eucalyptus_opts_help[5] ;
  args_info->define_min = 0;
  args_info->define_max = 0;
  args_info->verbose_help = eucalyptus_opts_help[6] ;
  args_info->out_help = eucalyptus_opts_help[7] ;
  args_info->err_help = eucalyptus_opts_help[8] ;
  args_info->check_help = eucalyptus_opts_help[10] ;
  args_info->stop_help = eucalyptus_opts_help[11] ;
  args_info->fork_help = eucalyptus_opts_help[12] ;
  args_info->pidfile_help = eucalyptus_opts_help[13] ;
  args_info->java_home_help = eucalyptus_opts_help[15] ;
  args_info->jvm_name_help = eucalyptus_opts_help[16] ;
  args_info->jvm_args_help = eucalyptus_opts_help[17] ;
  args_info->jvm_args_min = 0;
  args_info->jvm_args_max = 0;
  args_info->debug_help = eucalyptus_opts_help[18] ;
  args_info->debug_port_help = eucalyptus_opts_help[19] ;
  args_info->debug_suspend_help = eucalyptus_opts_help[20] ;
  
}

void
arguments_print_version (void)
{
  printf ("%s %s\n", ARGUMENTS_PACKAGE, ARGUMENTS_VERSION);
}

static void print_help_common(void) {
  arguments_print_version ();

  if (strlen(eucalyptus_opts_purpose) > 0)
    printf("\n%s\n", eucalyptus_opts_purpose);

  if (strlen(eucalyptus_opts_usage) > 0)
    printf("\n%s\n", eucalyptus_opts_usage);

  printf("\n");

  if (strlen(eucalyptus_opts_description) > 0)
    printf("%s\n\n", eucalyptus_opts_description);
}

void
arguments_print_help (void)
{
  int i = 0;
  print_help_common();
  while (eucalyptus_opts_help[i])
    printf("%s\n", eucalyptus_opts_help[i++]);
}

void
arguments_init (struct eucalyptus_opts *args_info)
{
  clear_given (args_info);
  clear_args (args_info);
  init_args_info (args_info);
}

void
arguments_params_init(struct arguments_params *params)
{
  if (params)
    { 
      params->override = 0;
      params->initialize = 1;
      params->check_required = 1;
      params->check_ambiguity = 0;
      params->print_errors = 1;
    }
}

struct arguments_params *
arguments_params_create(void)
{
  struct arguments_params *params = 
    (struct arguments_params *)malloc(sizeof(struct arguments_params));
  arguments_params_init(params);  
  return params;
}

static void
free_string_field (char **s)
{
  if (*s)
    {
      free (*s);
      *s = 0;
    }
}

/** @brief generic value variable */
union generic_value {
    int int_arg;
    char *string_arg;
};

/** @brief holds temporary values for multiple options */
struct generic_list
{
  union generic_value arg;
  char *orig;
  struct generic_list *next;
};

/**
 * @brief add a node at the head of the list 
 */
static void add_node(struct generic_list **list) {
  struct generic_list *new_node = (struct generic_list *) malloc (sizeof (struct generic_list));
  new_node->next = *list;
  *list = new_node;
  new_node->arg.string_arg = NULL;
  new_node->orig = NULL;
}


static void
free_multiple_string_field(unsigned int len, char ***arg, char ***orig)
{
  unsigned int i;
  if (*arg) {
    for (i = 0; i < len; ++i)
      {
        free_string_field(&((*arg)[i]));
        free_string_field(&((*orig)[i]));
      }
    free_string_field(&((*arg)[0])); /* free default string */

    free (*arg);
    *arg = 0;
    free (*orig);
    *orig = 0;
  }
}

static void
arguments_release (struct eucalyptus_opts *args_info)
{

  free_string_field (&(args_info->user_arg));
  free_string_field (&(args_info->user_orig));
  free_string_field (&(args_info->home_arg));
  free_string_field (&(args_info->home_orig));
  free_multiple_string_field (args_info->define_given, &(args_info->define_arg), &(args_info->define_orig));
  free_string_field (&(args_info->out_arg));
  free_string_field (&(args_info->out_orig));
  free_string_field (&(args_info->err_arg));
  free_string_field (&(args_info->err_orig));
  free_string_field (&(args_info->pidfile_arg));
  free_string_field (&(args_info->pidfile_orig));
  free_string_field (&(args_info->java_home_arg));
  free_string_field (&(args_info->java_home_orig));
  free_string_field (&(args_info->jvm_name_arg));
  free_string_field (&(args_info->jvm_name_orig));
  free_multiple_string_field (args_info->jvm_args_given, &(args_info->jvm_args_arg), &(args_info->jvm_args_orig));
  free_string_field (&(args_info->debug_port_orig));
  
  

  clear_given (args_info);
}


static void
write_into_file(FILE *outfile, const char *opt, const char *arg, char *values[])
{
  if (arg) {
    fprintf(outfile, "%s=\"%s\"\n", opt, arg);
  } else {
    fprintf(outfile, "%s\n", opt);
  }
}

static void
write_multiple_into_file(FILE *outfile, int len, const char *opt, char **arg, char *values[])
{
  int i;
  
  for (i = 0; i < len; ++i)
    write_into_file(outfile, opt, (arg ? arg[i] : 0), values);
}

int
arguments_dump(FILE *outfile, struct eucalyptus_opts *args_info)
{
  int i = 0;

  if (!outfile)
    {
      fprintf (stderr, "%s: cannot dump options to stream\n", ARGUMENTS_PACKAGE);
      return EXIT_FAILURE;
    }

  if (args_info->help_given)
    write_into_file(outfile, "help", 0, 0 );
  if (args_info->version_given)
    write_into_file(outfile, "version", 0, 0 );
  if (args_info->user_given)
    write_into_file(outfile, "user", args_info->user_orig, 0);
  if (args_info->home_given)
    write_into_file(outfile, "home", args_info->home_orig, 0);
  write_multiple_into_file(outfile, args_info->define_given, "define", args_info->define_orig, 0);
  if (args_info->verbose_given)
    write_into_file(outfile, "verbose", 0, 0 );
  if (args_info->out_given)
    write_into_file(outfile, "out", args_info->out_orig, 0);
  if (args_info->err_given)
    write_into_file(outfile, "err", args_info->err_orig, 0);
  if (args_info->check_given)
    write_into_file(outfile, "check", 0, 0 );
  if (args_info->stop_given)
    write_into_file(outfile, "stop", 0, 0 );
  if (args_info->fork_given)
    write_into_file(outfile, "fork", 0, 0 );
  if (args_info->pidfile_given)
    write_into_file(outfile, "pidfile", args_info->pidfile_orig, 0);
  if (args_info->java_home_given)
    write_into_file(outfile, "java-home", args_info->java_home_orig, 0);
  if (args_info->jvm_name_given)
    write_into_file(outfile, "jvm-name", args_info->jvm_name_orig, 0);
  write_multiple_into_file(outfile, args_info->jvm_args_given, "jvm-args", args_info->jvm_args_orig, 0);
  if (args_info->debug_given)
    write_into_file(outfile, "debug", 0, 0 );
  if (args_info->debug_port_given)
    write_into_file(outfile, "debug-port", args_info->debug_port_orig, 0);
  if (args_info->debug_suspend_given)
    write_into_file(outfile, "debug-suspend", 0, 0 );
  

  i = EXIT_SUCCESS;
  return i;
}

int
arguments_file_save(const char *filename, struct eucalyptus_opts *args_info)
{
  FILE *outfile;
  int i = 0;

  outfile = fopen(filename, "w");

  if (!outfile)
    {
      fprintf (stderr, "%s: cannot open file for writing: %s\n", ARGUMENTS_PACKAGE, filename);
      return EXIT_FAILURE;
    }

  i = arguments_dump(outfile, args_info);
  fclose (outfile);

  return i;
}

void
arguments_free (struct eucalyptus_opts *args_info)
{
  arguments_release (args_info);
}

/** @brief replacement of strdup, which is not standard */
char *
gengetopt_strdup (const char *s)
{
  char *result = NULL;
  if (!s)
    return result;

  result = (char*)malloc(strlen(s) + 1);
  if (result == (char*)0)
    return (char*)0;
  strcpy(result, s);
  return result;
}

static char *
get_multiple_arg_token(const char *arg)
{
  char *tok, *ret;
  size_t len, num_of_escape, i, j;

  if (!arg)
    return NULL;

  tok = strchr (arg, ',');
  num_of_escape = 0;

  /* make sure it is not escaped */
  while (tok)
    {
      if (*(tok-1) == '\\')
        {
          /* find the next one */
          tok = strchr (tok+1, ',');
          ++num_of_escape;
        }
      else
        break;
    }

  if (tok)
    len = (size_t)(tok - arg + 1);
  else
    len = strlen (arg) + 1;

  len -= num_of_escape;

  ret = (char *) malloc (len);

  i = 0;
  j = 0;
  while (arg[i] && (j < len-1))
    {
      if (arg[i] == '\\' && 
	  arg[ i + 1 ] && 
	  arg[ i + 1 ] == ',')
        ++i;

      ret[j++] = arg[i++];
    }

  ret[len-1] = '\0';

  return ret;
}

static char *
get_multiple_arg_token_next(const char *arg)
{
  char *tok;

  if (!arg)
    return NULL;

  tok = strchr (arg, ',');

  /* make sure it is not escaped */
  while (tok)
    {
      if (*(tok-1) == '\\')
        {
          /* find the next one */
          tok = strchr (tok+1, ',');
        }
      else
        break;
    }

  if (! tok || strlen(tok) == 1)
    return 0;

  return tok+1;
}

static int
check_multiple_option_occurrences(const char *prog_name, unsigned int option_given, unsigned int min, unsigned int max, const char *option_desc);

int
check_multiple_option_occurrences(const char *prog_name, unsigned int option_given, unsigned int min, unsigned int max, const char *option_desc)
{
  int error = 0;

  if (option_given && (min > 0 || max > 0))
    {
      if (min > 0 && max > 0)
        {
          if (min == max)
            {
              /* specific occurrences */
              if (option_given != min)
                {
                  fprintf (stderr, "%s: %s option occurrences must be %d\n",
                    prog_name, option_desc, min);
                  error = 1;
                }
            }
          else if (option_given < min
              || option_given > max)
            {
              /* range occurrences */
              fprintf (stderr, "%s: %s option occurrences must be between %d and %d\n",
                prog_name, option_desc, min, max);
              error = 1;
            }
        }
      else if (min > 0)
        {
          /* at least check */
          if (option_given < min)
            {
              fprintf (stderr, "%s: %s option occurrences must be at least %d\n",
                prog_name, option_desc, min);
              error = 1;
            }
        }
      else if (max > 0)
        {
          /* at most check */
          if (option_given > max)
            {
              fprintf (stderr, "%s: %s option occurrences must be at most %d\n",
                prog_name, option_desc, max);
              error = 1;
            }
        }
    }
    
  return error;
}
int
arguments (int argc, char * const *argv, struct eucalyptus_opts *args_info)
{
  return arguments2 (argc, argv, args_info, 0, 1, 1);
}

int
arguments_ext (int argc, char * const *argv, struct eucalyptus_opts *args_info,
                   struct arguments_params *params)
{
  int result;
  result = arguments_internal (argc, argv, args_info, params, NULL);

  if (result == EXIT_FAILURE)
    {
      arguments_free (args_info);
      exit (EXIT_FAILURE);
    }
  
  return result;
}

int
arguments2 (int argc, char * const *argv, struct eucalyptus_opts *args_info, int override, int initialize, int check_required)
{
  int result;
  struct arguments_params params;
  
  params.override = override;
  params.initialize = initialize;
  params.check_required = check_required;
  params.check_ambiguity = 0;
  params.print_errors = 1;

  result = arguments_internal (argc, argv, args_info, &params, NULL);

  if (result == EXIT_FAILURE)
    {
      arguments_free (args_info);
      exit (EXIT_FAILURE);
    }
  
  return result;
}

int
arguments_required (struct eucalyptus_opts *args_info, const char *prog_name)
{
  int result = EXIT_SUCCESS;

  if (arguments_required2(args_info, prog_name, NULL) > 0)
    result = EXIT_FAILURE;

  if (result == EXIT_FAILURE)
    {
      arguments_free (args_info);
      exit (EXIT_FAILURE);
    }
  
  return result;
}

int
arguments_required2 (struct eucalyptus_opts *args_info, const char *prog_name, const char *additional_error)
{
  int error = 0;

  /* checks for required options */
  if (check_multiple_option_occurrences(prog_name, args_info->define_given, args_info->define_min, args_info->define_max, "'--define' ('-D')"))
     error = 1;
  
  if (check_multiple_option_occurrences(prog_name, args_info->jvm_args_given, args_info->jvm_args_min, args_info->jvm_args_max, "'--jvm-args' ('-X')"))
     error = 1;
  
  
  /* checks for dependences among options */
  if (args_info->debug_port_given && ! args_info->debug_given)
    {
      fprintf (stderr, "%s: '--debug-port' option depends on option 'debug'%s\n", prog_name, (additional_error ? additional_error : ""));
      error = 1;
    }
  if (args_info->debug_suspend_given && ! args_info->debug_given)
    {
      fprintf (stderr, "%s: '--debug-suspend' option depends on option 'debug'%s\n", prog_name, (additional_error ? additional_error : ""));
      error = 1;
    }

  return error;
}


static char *package_name = 0;

/**
 * @brief updates an option
 * @param field the generic pointer to the field to update
 * @param orig_field the pointer to the orig field
 * @param field_given the pointer to the number of occurrence of this option
 * @param prev_given the pointer to the number of occurrence already seen
 * @param value the argument for this option (if null no arg was specified)
 * @param possible_values the possible values for this option (if specified)
 * @param default_value the default value (in case the option only accepts fixed values)
 * @param arg_type the type of this option
 * @param check_ambiguity @see arguments_params.check_ambiguity
 * @param override @see arguments_params.override
 * @param no_free whether to free a possible previous value
 * @param multiple_option whether this is a multiple option
 * @param long_opt the corresponding long option
 * @param short_opt the corresponding short option (or '-' if none)
 * @param additional_error possible further error specification
 */
static
int update_arg(void *field, char **orig_field,
               unsigned int *field_given, unsigned int *prev_given, 
               char *value, char *possible_values[], const char *default_value,
               arguments_arg_type arg_type,
               int check_ambiguity, int override,
               int no_free, int multiple_option,
               const char *long_opt, char short_opt,
               const char *additional_error)
{
  char *stop_char = 0;
  const char *val = value;
  int found;
  char **string_field;

  stop_char = 0;
  found = 0;

  if (!multiple_option && prev_given && (*prev_given || (check_ambiguity && *field_given)))
    {
      if (short_opt != '-')
        fprintf (stderr, "%s: `--%s' (`-%c') option given more than once%s\n", 
               package_name, long_opt, short_opt,
               (additional_error ? additional_error : ""));
      else
        fprintf (stderr, "%s: `--%s' option given more than once%s\n", 
               package_name, long_opt,
               (additional_error ? additional_error : ""));
      return 1; /* failure */
    }

    
  if (field_given && *field_given && ! override)
    return 0;
  if (prev_given)
    (*prev_given)++;
  if (field_given)
    (*field_given)++;
  if (possible_values)
    val = possible_values[found];

  switch(arg_type) {
  case ARG_FLAG:
    *((int *)field) = !*((int *)field);
    break;
  case ARG_INT:
    if (val) *((int *)field) = strtol (val, &stop_char, 0);
    break;
  case ARG_STRING:
    if (val) {
      string_field = (char **)field;
      if (!no_free && *string_field)
        free (*string_field); /* free previous string */
      *string_field = gengetopt_strdup (val);
    }
    break;
  default:
    break;
  };

  /* check numeric conversion */
  switch(arg_type) {
  case ARG_INT:
    if (val && !(stop_char && *stop_char == '\0')) {
      fprintf(stderr, "%s: invalid numeric value: %s\n", package_name, val);
      return 1; /* failure */
    }
    break;
  default:
    ;
  };

  /* store the original value */
  switch(arg_type) {
  case ARG_NO:
  case ARG_FLAG:
    break;
  default:
    if (value && orig_field) {
      if (no_free) {
        *orig_field = value;
      } else {
        if (*orig_field)
          free (*orig_field); /* free previous string */
        *orig_field = gengetopt_strdup (value);
      }
    }
  };

  return 0; /* OK */
}

/**
 * @brief store information about a multiple option in a temporary list
 * @param list where to (temporarily) store multiple options
 */
static
int update_multiple_arg_temp(struct generic_list **list,
               unsigned int *prev_given, const char *val,
               char *possible_values[], const char *default_value,
               arguments_arg_type arg_type,
               const char *long_opt, char short_opt,
               const char *additional_error)
{
  char *multi_token, *multi_next; /* store single arguments */

  if (arg_type == ARG_NO) {
    (*prev_given)++;
    return 0; /* OK */
  }

  multi_token = get_multiple_arg_token(val);
  multi_next = get_multiple_arg_token_next (val);

  while (1)
    {
      add_node (list);
      if (update_arg((void *)&((*list)->arg), &((*list)->orig), 0,
          prev_given, multi_token, possible_values, default_value, 
          arg_type, 0, 1, 1, 1, long_opt, short_opt, additional_error)) {
        if (multi_token) free(multi_token);
        return 1; /* failure */
      }

      if (multi_next)
        {
          multi_token = get_multiple_arg_token(multi_next);
          multi_next = get_multiple_arg_token_next (multi_next);
        }
      else
        break;
    }

  return 0; /* OK */
}

/**
 * @brief free the passed list (including possible string argument)
 */
static
void free_list(struct generic_list *list, short string_arg)
{
  if (list) {
    struct generic_list *tmp;
    while (list)
      {
        tmp = list;
        if (string_arg && list->arg.string_arg)
          free (list->arg.string_arg);
        if (list->orig)
          free (list->orig);
        list = list->next;
        free (tmp);
      }
  }
}

/**
 * @brief updates a multiple option starting from the passed list
 */
static
void update_multiple_arg(void *field, char ***orig_field,
               unsigned int field_given, unsigned int prev_given, union generic_value *default_value,
               arguments_arg_type arg_type,
               struct generic_list *list)
{
  int i;
  struct generic_list *tmp;

  if (prev_given && list) {
    *orig_field = (char **) realloc (*orig_field, (field_given + prev_given) * sizeof (char *));

    switch(arg_type) {
    case ARG_INT:
      *((int **)field) = (int *)realloc (*((int **)field), (field_given + prev_given) * sizeof (int)); break;
    case ARG_STRING:
      *((char ***)field) = (char **)realloc (*((char ***)field), (field_given + prev_given) * sizeof (char *)); break;
    default:
      break;
    };
    
    for (i = (prev_given - 1); i >= 0; --i)
      {
        tmp = list;
        
        switch(arg_type) {
        case ARG_INT:
          (*((int **)field))[i + field_given] = tmp->arg.int_arg; break;
        case ARG_STRING:
          (*((char ***)field))[i + field_given] = tmp->arg.string_arg; break;
        default:
          break;
        }        
        (*orig_field) [i + field_given] = list->orig;
        list = list->next;
        free (tmp);
      }
  } else { /* set the default value */
    if (default_value && ! field_given) {
      switch(arg_type) {
      case ARG_INT:
        if (! *((int **)field)) {
          *((int **)field) = (int *)malloc (sizeof (int));
          (*((int **)field))[0] = default_value->int_arg; 
        }
        break;
      case ARG_STRING:
        if (! *((char ***)field)) {
          *((char ***)field) = (char **)malloc (sizeof (char *));
          (*((char ***)field))[0] = gengetopt_strdup(default_value->string_arg);
        }
        break;
      default: break;
      }
      if (!(*orig_field)) {
        *orig_field = (char **) malloc (sizeof (char *));
        (*orig_field)[0] = NULL;
      }
    }
  }
}

int
arguments_internal (int argc, char * const *argv, struct eucalyptus_opts *args_info,
                        struct arguments_params *params, const char *additional_error)
{
  int c;	/* Character of the parsed option.  */

  struct generic_list * define_list = NULL;
  struct generic_list * jvm_args_list = NULL;
  int error = 0;
  struct eucalyptus_opts local_args_info;
  
  int override;
  int initialize;
  int check_required;
  int check_ambiguity;
  
  package_name = argv[0];
  
  override = params->override;
  initialize = params->initialize;
  check_required = params->check_required;
  check_ambiguity = params->check_ambiguity;

  if (initialize)
    arguments_init (args_info);

  arguments_init (&local_args_info);

  optarg = 0;
  optind = 0;
  opterr = params->print_errors;
  optopt = '?';

  while (1)
    {
      int option_index = 0;

      static struct option long_options[] = {
        { "help",	0, NULL, 0 },
        { "version",	0, NULL, 'V' },
        { "user",	1, NULL, 'u' },
        { "home",	1, NULL, 'h' },
        { "define",	1, NULL, 'D' },
        { "verbose",	0, NULL, 'v' },
        { "out",	1, NULL, 'o' },
        { "err",	1, NULL, 'e' },
        { "check",	0, NULL, 'C' },
        { "stop",	0, NULL, 'S' },
        { "fork",	0, NULL, 'f' },
        { "pidfile",	1, NULL, 0 },
        { "java-home",	1, NULL, 'j' },
        { "jvm-name",	1, NULL, 'J' },
        { "jvm-args",	1, NULL, 'X' },
        { "debug",	0, NULL, 'd' },
        { "debug-port",	1, NULL, 0 },
        { "debug-suspend",	0, NULL, 0 },
        { NULL,	0, NULL, 0 }
      };

      c = getopt_long (argc, argv, "Vu:h:D:vo:e:CSfj:J:X:d", long_options, &option_index);

      if (c == -1) break;	/* Exit from `while (1)' loop.  */

      switch (c)
        {
        case 'V':	/* Print version and exit.  */
          arguments_print_version ();
          arguments_free (&local_args_info);
          exit (EXIT_SUCCESS);

        case 'u':	/* User to drop privs to after starting..  */
        
        
          if (update_arg( (void *)&(args_info->user_arg), 
               &(args_info->user_orig), &(args_info->user_given),
              &(local_args_info.user_given), optarg, 0, "eucalyptus", ARG_STRING,
              check_ambiguity, override, 0, 0,
              "user", 'u',
              additional_error))
            goto failure;
        
          break;
        case 'h':	/* Eucalyptus home directory..  */
        
        
          if (update_arg( (void *)&(args_info->home_arg), 
               &(args_info->home_orig), &(args_info->home_given),
              &(local_args_info.home_given), optarg, 0, "/", ARG_STRING,
              check_ambiguity, override, 0, 0,
              "home", 'h',
              additional_error))
            goto failure;
        
          break;
        case 'D':	/* Set system properties..  */
        
          if (update_multiple_arg_temp(&define_list, 
              &(local_args_info.define_given), optarg, 0, 0, ARG_STRING,
              "define", 'D',
              additional_error))
            goto failure;
        
          break;
        case 'v':	/* Verbose console output. Note: log file output is not controlled by this flag..  */
        
        
          if (update_arg((void *)&(args_info->verbose_flag), 0, &(args_info->verbose_given),
              &(local_args_info.verbose_given), optarg, 0, 0, ARG_FLAG,
              check_ambiguity, override, 1, 0, "verbose", 'v',
              additional_error))
            goto failure;
        
          break;
        case 'o':	/* Redirect standard out to file..  */
        
        
          if (update_arg( (void *)&(args_info->out_arg), 
               &(args_info->out_orig), &(args_info->out_given),
              &(local_args_info.out_given), optarg, 0, "&1", ARG_STRING,
              check_ambiguity, override, 0, 0,
              "out", 'o',
              additional_error))
            goto failure;
        
          break;
        case 'e':	/* Redirect standard error to file..  */
        
        
          if (update_arg( (void *)&(args_info->err_arg), 
               &(args_info->err_orig), &(args_info->err_given),
              &(local_args_info.err_given), optarg, 0, "&2", ARG_STRING,
              check_ambiguity, override, 0, 0,
              "err", 'e',
              additional_error))
            goto failure;
        
          break;
        case 'C':	/* Check on Eucalyptus..  */
        
        
          if (update_arg((void *)&(args_info->check_flag), 0, &(args_info->check_given),
              &(local_args_info.check_given), optarg, 0, 0, ARG_FLAG,
              check_ambiguity, override, 1, 0, "check", 'C',
              additional_error))
            goto failure;
        
          break;
        case 'S':	/* Stop Eucalyptus..  */
        
        
          if (update_arg((void *)&(args_info->stop_flag), 0, &(args_info->stop_given),
              &(local_args_info.stop_given), optarg, 0, 0, ARG_FLAG,
              check_ambiguity, override, 1, 0, "stop", 'S',
              additional_error))
            goto failure;
        
          break;
        case 'f':	/* Fork and daemonize Eucalyptus..  */
        
        
          if (update_arg((void *)&(args_info->fork_flag), 0, &(args_info->fork_given),
              &(local_args_info.fork_given), optarg, 0, 0, ARG_FLAG,
              check_ambiguity, override, 1, 0, "fork", 'f',
              additional_error))
            goto failure;
        
          break;
        case 'j':	/* Alternative way to specify JAVA_HOME..  */
        
        
          if (update_arg( (void *)&(args_info->java_home_arg), 
               &(args_info->java_home_orig), &(args_info->java_home_given),
              &(local_args_info.java_home_given), optarg, 0, "/usr/lib/jvm/java-6-openjdk", ARG_STRING,
              check_ambiguity, override, 0, 0,
              "java-home", 'j',
              additional_error))
            goto failure;
        
          break;
        case 'J':	/* Which JVM type to run (see jvm.cfg)..  */
        
        
          if (update_arg( (void *)&(args_info->jvm_name_arg), 
               &(args_info->jvm_name_orig), &(args_info->jvm_name_given),
              &(local_args_info.jvm_name_given), optarg, 0, "-server", ARG_STRING,
              check_ambiguity, override, 0, 0,
              "jvm-name", 'J',
              additional_error))
            goto failure;
        
          break;
        case 'X':	/* Arguments to pass to the JVM..  */
        
          if (update_multiple_arg_temp(&jvm_args_list, 
              &(local_args_info.jvm_args_given), optarg, 0, 0, ARG_STRING,
              "jvm-args", 'X',
              additional_error))
            goto failure;
        
          break;
        case 'd':	/* Launch with debugger enabled..  */
        
        
          if (update_arg((void *)&(args_info->debug_flag), 0, &(args_info->debug_given),
              &(local_args_info.debug_given), optarg, 0, 0, ARG_FLAG,
              check_ambiguity, override, 1, 0, "debug", 'd',
              additional_error))
            goto failure;
        
          break;

        case 0:	/* Long option with no short option */
          if (strcmp (long_options[option_index].name, "help") == 0) {
            arguments_print_help ();
            arguments_free (&local_args_info);
            exit (EXIT_SUCCESS);
          }

          /* Location for the pidfile..  */
          if (strcmp (long_options[option_index].name, "pidfile") == 0)
          {
          
          
            if (update_arg( (void *)&(args_info->pidfile_arg), 
                 &(args_info->pidfile_orig), &(args_info->pidfile_given),
                &(local_args_info.pidfile_given), optarg, 0, "/var/run/eucalyptus-cloud.pid", ARG_STRING,
                check_ambiguity, override, 0, 0,
                "pidfile", '-',
                additional_error))
              goto failure;
          
          }
          /* Set the port to use for the debugger..  */
          else if (strcmp (long_options[option_index].name, "debug-port") == 0)
          {
          
          
            if (update_arg( (void *)&(args_info->debug_port_arg), 
                 &(args_info->debug_port_orig), &(args_info->debug_port_given),
                &(local_args_info.debug_port_given), optarg, 0, "5005", ARG_INT,
                check_ambiguity, override, 0, 0,
                "debug-port", '-',
                additional_error))
              goto failure;
          
          }
          /* Set the port to use for the debugger..  */
          else if (strcmp (long_options[option_index].name, "debug-suspend") == 0)
          {
          
          
            if (update_arg((void *)&(args_info->debug_suspend_flag), 0, &(args_info->debug_suspend_given),
                &(local_args_info.debug_suspend_given), optarg, 0, 0, ARG_FLAG,
                check_ambiguity, override, 1, 0, "debug-suspend", '-',
                additional_error))
              goto failure;
          
          }
          
          break;
        case '?':	/* Invalid option.  */
          /* `getopt_long' already printed an error message.  */
          goto failure;

        default:	/* bug: option not considered.  */
          fprintf (stderr, "%s: option unknown: %c%s\n", ARGUMENTS_PACKAGE, c, (additional_error ? additional_error : ""));
          abort ();
        } /* switch */
    } /* while */


  update_multiple_arg((void *)&(args_info->define_arg),
    &(args_info->define_orig), args_info->define_given,
    local_args_info.define_given, 0 , 
    ARG_STRING, define_list);
  update_multiple_arg((void *)&(args_info->jvm_args_arg),
    &(args_info->jvm_args_orig), args_info->jvm_args_given,
    local_args_info.jvm_args_given, 0 , 
    ARG_STRING, jvm_args_list);

  args_info->define_given += local_args_info.define_given;
  local_args_info.define_given = 0;
  args_info->jvm_args_given += local_args_info.jvm_args_given;
  local_args_info.jvm_args_given = 0;
  
  if (check_required)
    {
      error += arguments_required2 (args_info, argv[0], additional_error);
    }

  arguments_release (&local_args_info);

  if ( error )
    return (EXIT_FAILURE);

  return 0;

failure:
  free_list (define_list, 1 );
  free_list (jvm_args_list, 1 );
  
  arguments_release (&local_args_info);
  return (EXIT_FAILURE);
}
